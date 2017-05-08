/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Item.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:58:28 by lscopel           #+#    #+#             */
/*   Updated: 2015/11/08 15:29:44 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Item.class.hpp"

//Constructors
Item::Item(void){
	this->_x = 0;
	this->_y = 0;
	this->_speed = 0;
	this->_activate = 0; 
};

Item::Item(Item const &rhs){
	*this = rhs;
};

//Destructor
Item::~Item(void){};

Item		&Item::operator=(Item const &rhs){
	this->_x = rhs.get_x();
	this->_y = rhs.get_y();
	this->_speed = rhs.get_speed();
	this->_activate = rhs.get_activate();

	return *this;
};

//Setter / Getter

int		Item::get_activate(void) const{
	return this->_activate;
}
int		Item::get_x(void) const{
	return this->_x;
}
int		Item::get_y(void) const{
	return this->_y;
}
int		Item::get_height(void) const{
	return this->_height;
}
int		Item::get_speed(void) const{
	return this->_speed;
}

void	Item::set_activate(int activate){
	this->_activate = activate;
}
void		Item::set_x(int x){
	this->_x = x;
}
void		Item::set_y(int y){
	this->_y = y;
}
void		Item::set_height(int height){
	this->_height = height;
}
void		Item::set_speed(int speed){
	this->_speed = speed;
}

