/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 15:41:10 by vroche            #+#    #+#             */
/*   Updated: 2015/11/08 16:46:13 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RETRO_HPP
# define FT_RETRO_HPP

#include <curses.h>
#include <unistd.h>
#include <iostream>
#include <time.h>
#include <sys/time.h>

#include "Obstacle.class.hpp"
#include "Missile.class.hpp"

typedef struct	s_win
{
	int			initmaxx;
	int			initmaxy;
	time_t		inittime;
	int			maxx;
	int			maxy;
	int			x;
	int			y;
	int			lives;
	int			score;
	WINDOW*		wnd;
	Missile		*Missile;
	Obstacle	*Obstacle;
}				t_win;

void	ft_display(t_win *win);
void	ft_display_small(void);

void	motor(t_win *win);

#endif
