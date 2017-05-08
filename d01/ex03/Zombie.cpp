/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:39:02 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 12:28:07 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	this->_name = randName();
	this->_type = randType();
//	announce();
}

std::string		Zombie::randName(){
	std::string	rtn;
	int RandIndex = rand() % 4;

	std::string textArray[4] = {"MmeCake", "MmeToast", "MrButter", "MrJelly"};
	rtn = textArray[RandIndex];
	return (rtn);
}

std::string		Zombie::randType(){
	std::string	rtn;
	int RandIndex = rand() % 4;

	std::string textArray[4] = {"Dickhead", "Ass", "Witch", "Bitch"};
	rtn = textArray[RandIndex];
	return (rtn);
}

Zombie::~Zombie(){
	std::cout << this->_name << " is dead once again." << std::endl;
}

void					Zombie::announce(){
	std::string			output;

	output += "<";
	output += this->_name;
	output += " (";
	output += this->_type;
	output += ")> Braiiiiiiiiiinnnnnssssss......";
	std::cout << output << std::endl;
}

void			Zombie::setName(std::string name){
	this->_name = name;
}

void			Zombie::setType(std::string type){
	this->_type = type;
}
