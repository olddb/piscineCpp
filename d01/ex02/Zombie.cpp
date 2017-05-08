/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:39:02 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 23:33:13 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){
	announce();
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
