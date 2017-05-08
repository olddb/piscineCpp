/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:01:25 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/08 15:00:16 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Missile.class.hpp"

Missile::Missile(void) : Obstacle() {};

Missile::Missile(Missile const &missy)
{
	*this = missy;
};

Missile::~Missile(void){};

//Overload operator

Missile		&Missile::operator=(Missile const &missy){

	Obstacle::operator=(missy);
	return *this;
}
