/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 21:10:01 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 21:10:02 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string Type) : type(Type) {
	return;
}
Weapon::~Weapon (void) {
	return ;
}


void		 		Weapon::setType(std::string typeWeapon) {
	this->type = typeWeapon;
}

const std::string& 	Weapon::getType(void) {
	return (this->type);
}
