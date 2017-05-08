/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Obstacle.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:44:55 by lscopel           #+#    #+#             */
/*   Updated: 2015/11/08 15:00:48 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Obstacle.class.hpp"

//CANONICAL
Obstacle::Obstacle(void) : Item() {}

Obstacle::Obstacle(Obstacle const& src) { *this = src; }

Obstacle::~Obstacle(void) {}


//OVERLOADS OPERATORS
Obstacle&		Obstacle::operator=(Obstacle const& rhs) {

	Item::operator=(rhs);
	return *this;
}

