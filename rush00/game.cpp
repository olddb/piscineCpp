/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 19:03:45 by vroche            #+#    #+#             */
/*   Updated: 2015/11/08 15:49:51 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

static void	ft_add_obstacle(t_win *win)
{
	int	i;

	i = rand() % (win->initmaxy - 3);
	if (win->Obstacle[i].get_activate() != 0)
		return ;
	win->Obstacle[i].set_y(i);
	win->Obstacle[i].set_x(win->initmaxx - 1);
	win->Obstacle[i].set_speed(-1);
	win->Obstacle[i].set_activate((i % 2) + 1);
	if (win->Obstacle[i].get_activate() == 1)
		win->Obstacle[i].set_height((i % 6) + 1);
	else
		win->Obstacle[i].set_height(1);
}

static void	ft_add_missile(t_win *win)
{
	int	i;
	int	j;

	i = rand() % (win->initmaxy - 3);
	j = 0;
	while (i < win->initmaxy - 3)
	{
		if (win->Obstacle[i].get_activate() == 1)
		{
			j = 0;
			while (j < (win->initmaxy - 3) * (win->initmaxx - 2) && win->Missile[j].get_activate() == 1)
				j++;
			if (j < (win->initmaxy - 3) * (win->initmaxx - 2))
				break ;
			else
				return ;
		}
		i++;
	}
	if (i < win->initmaxy - 3)
	{
		win->Missile[j].set_activate(1);
		win->Missile[j].set_y(win->Obstacle[i].get_y());
		win->Missile[j].set_x(win->Obstacle[i].get_x() - 1);
		win->Missile[j].set_speed(-2);
	}
}

static void	ft_check_obstacle_missile(t_win *win)
{
	int	i;
	int	j;

	i = 0;
	while (i < (win->initmaxy - 3) * (win->initmaxx - 2))
	{
		j = 0;
		while (win->Missile[i].get_activate() > 0 && j < win->initmaxy - 3)
		{
			if (win->Obstacle[j].get_activate() && win->Missile[i].get_speed() > 0 && win->Missile[i].get_y() == win->Obstacle[j].get_y())
			{
				if (win->Missile[i].get_x() <= win->Obstacle[j].get_x() && win->Missile[i].get_x() + win->Missile[i].get_speed() >= win->Obstacle[j].get_x())
				{
					win->Missile[i].set_activate(0);
					win->Obstacle[j].set_activate(0);
					win->score += 5 * win->Obstacle[j].get_height();
				}
			}
			else if (win->Obstacle[j].get_activate() && win->Missile[i].get_speed() < 0 && win->Missile[i].get_y() == win->y)
			{
				if (win->Missile[i].get_x() >= win->x && win->Missile[i].get_x() + win->Missile[i].get_speed() <= win->x)
				{
					win->Missile[i].set_activate(0);
					win->lives--;
					win->x = 0;
					win->y = 0;
				}
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < win->initmaxy - 3)
	{
		if (win->Obstacle[i].get_activate())
		{
			if (win->Obstacle[i].get_y() == win->y)
			{
				if (win->Obstacle[i].get_x() >= win->x && win->Obstacle[i].get_x() + win->Obstacle[i].get_speed() <= win->x)
				{
					win->Obstacle[i].set_activate(0);
					win->lives--;
					win->x = 0;
					win->y = 0;
				}
			}
			win->Obstacle[i].set_x(win->Obstacle[i].get_x()+ win->Obstacle[i].get_speed());
				if (win->Obstacle[i].get_x() < 0 )
					win->Obstacle[i].set_activate(0);
		}
		i++;
	}
}

static void	ft_check_missilevsmissile(t_win *win)
{
	int	i;
	int	j;

	i = 0;
	while (i < (win->initmaxy - 3) * (win->initmaxx - 2))
	{
		j = i + 1;
		while (j < (win->initmaxy - 3) * (win->initmaxx - 2) && win->Missile[i].get_activate())
		{
			if (win->Missile[j].get_activate() && win->Missile[i].get_y() == win->Missile[j].get_y() \
				&& win->Missile[i].get_speed() != win->Missile[j].get_speed())
			{
				if (win->Missile[i].get_speed() > 0)
				{
					if (win->Missile[i].get_x() <= win->Missile[j].get_x() && win->Missile[i].get_x() + win->Missile[i].get_speed() >= win->Missile[j].get_x())
					{
						win->Missile[i].set_activate(0);
						win->Missile[j].set_activate(0);
					}
				}
				else
				{
					if (win->Missile[i].get_x() >= win->Missile[j].get_x() && win->Missile[i].get_x() + win->Missile[i].get_speed() <= win->Missile[j].get_x())
					{
						win->Missile[i].set_activate(0);
						win->Missile[j].set_activate(0);
					}
				}
			}
			j++;
		}
		i++;
	}
}

static void	ft_move(t_win *win)
{
	int	i;

	i = 0;
	while (i < (win->initmaxy - 3) * (win->initmaxx - 2))
	{
		if (win->Missile[i].get_activate() > 0)
		{
			if (win->Missile[i].get_speed() < 0)
			{
				win->Missile[i].set_x(win->Missile[i].get_x()+ win->Missile[i].get_speed());
				if (win->Missile[i].get_x() < 0 )
					win->Missile[i].set_activate(0);
			}
			else
			{
				win->Missile[i].set_x(win->Missile[i].get_x()+ win->Missile[i].get_speed());
				if (win->Missile[i].get_x() > win->initmaxx - 1 )
					win->Missile[i].set_activate(0);
			}
		}
		i++;
	}
}

void	motor(t_win *win)
{
	int	i;

	i = rand() % 10000;
	if (i > 8800)
		ft_add_obstacle(win);
	else if (i < 1000)
		ft_add_missile(win);
	ft_check_obstacle_missile(win);
	ft_check_missilevsmissile(win);
	ft_move(win);
}
