/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 17:25:52 by vroche            #+#    #+#             */
/*   Updated: 2015/11/08 17:09:05 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

static void	ft_init_screen(t_win *win)
{
	win->wnd = initscr();
	cbreak();
	noecho();
	nodelay(win->wnd, TRUE);
	curs_set(0);
	getmaxyx(win->wnd, win->initmaxy, win->initmaxx);
	if (win->initmaxy < 15 || win->initmaxx < 75)
	{
		endwin();
		std::cout << "Please extend window" << std::endl;
		exit(0);
	}
}

static void	ft_init_game(t_win *win)
{
	win->inittime = time(NULL);
	win->lives = 3;
	win->score = 0;
	win->Obstacle = new Obstacle[win->initmaxy - 3];
	win->Missile = new Missile[(win->initmaxy - 3) * (win->initmaxx - 2)];
}

static char	ft_key(char d)
{
	if (d == '\033')
	{
		getch();
		return (getch());
	}
	else if (d == ' ')
		return (d);
	return (0);
}

static void	ft_die(t_win *win)
{
	char	d;

	ft_display(win);
	move(win->initmaxy - 1, 38);
	printw("Press 'r' to restart game !");
	while ((d = getch()))
	{
		if (d == 'r')
		{
			delete[] win->Missile;
			delete[] win->Obstacle;
			ft_init_game(win);
			break ;
		}
		else if (d == '\033')
		{
			getch();
			d = getch();
			if (d == 'F')
			{
				endwin();
				exit(0);
			}
		}
	}
}

static void	ft_key_play(t_win *win, char curs)
{
	int	i;

	i = 0;
	if (curs == 'A' && win->y > 0)
		win->y--;
	else if (curs == 'B' && win->y < win->initmaxy - 3)
		win->y++;
	else if (curs == 'C' && win->x < win->initmaxx - 2)
		win->x++;
	else if (curs == 'D' && win->x > 0)
		win->x--;
	else if (curs == 'F')
	{
		endwin();
		exit(0);
	}
	else if (curs == ' ')
	{
		while (i < (win->initmaxy - 3) * (win->initmaxx - 2) && win->Missile[i].get_activate() == 1)
			i++;
		if (i >= (win->initmaxy - 3) * (win->initmaxx - 2))
			return;
		win->Missile[i].set_activate(1);
		win->Missile[i].set_y(win->y);
		win->Missile[i].set_x(win->x + 1);
		win->Missile[i].set_speed(2);
	}
}

int	main()
{
	char				d;
	char				curs;
	t_win				win;
	struct timeval		tv;
	unsigned long long 	msstart;
	unsigned long long 	msnow;

	ft_init_screen(&win);
	ft_init_game(&win);
	win.y = 0;
	win.x = 0;
	srand (time(NULL));
	gettimeofday(&tv, NULL);
	msstart = (unsigned long long)(tv.tv_sec) * 1000 + (unsigned long long)(tv.tv_usec) / 1000;
	while (1) 
	{
		gettimeofday(&tv, NULL);
		msnow = (unsigned long long)(tv.tv_sec) * 1000 + (unsigned long long)(tv.tv_usec) / 1000;
		getmaxyx(win.wnd, win.maxy, win.maxx);
		if (win.maxy >= win.initmaxy && win.maxx >= win.initmaxx && win.lives > 0)
		{
			if ((d = getch()) != ERR)
			{
				if ((d = ft_key(d)) != 0)
					curs = d;
			}
			if (msnow - msstart > 50)
			{
				ft_display(&win);
				motor(&win);
			}
		}
		else if (win.lives > 0)
			ft_display_small();
		else
			ft_die(&win);
		if (msnow - msstart > 50)
		{
			msstart = msnow;
			ft_key_play(&win, curs);
			curs = 0;
		}
	}
}
