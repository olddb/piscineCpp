/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 19:00:45 by vroche            #+#    #+#             */
/*   Updated: 2015/11/08 15:45:02 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

void	ft_display(t_win *win)
{
	int	i;
	int	height;

	refresh();
	clear();
	i = 0;
	while (i < win->initmaxy - 3)
	{
		if (win->Obstacle[i].get_activate() == 1)
		{
			height = win->Obstacle[i].get_height();
			while (height)
			{
				if (win->Obstacle[i].get_x() + height - 1 <= win->initmaxx - 1)
				{
					move(win->Obstacle[i].get_y(), win->Obstacle[i].get_x() + height - 1);
					addch(ACS_CKBOARD);
				}
				height--;
			}
		}
		else if (win->Obstacle[i].get_activate() == 2)
		{
			move(win->Obstacle[i].get_y(), win->Obstacle[i].get_x());
			addch('O');
		}
		i++;
	}
	i = 0;
	while (i < (win->initmaxy - 3) * (win->initmaxx - 2))
	{
		if (win->Missile[i].get_activate() == 1)
		{
			move(win->Missile[i].get_y(), win->Missile[i].get_x());
			addch('-');
		}
		i++;
	}
	move(win->y, win->x);
	addch(200);
	move(win->initmaxy - 2, 0);
	printw("------------------------------------------------");
	move(win->initmaxy - 1, 0);
	printw("Score : %d | Time : %d | Lives : %d", win->score, time(NULL) - win->inittime, win->lives);
}

void	ft_display_small(void)
{
	refresh();
	clear();
	move(0, 0);
	std::cout << "Too Small !" << std::endl;
}
