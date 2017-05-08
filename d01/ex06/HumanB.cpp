/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 21:09:40 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 21:09:43 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name){
}

HumanB::~HumanB(void){
}

void			HumanB::attack(void){
	std::cout << this->name << " attacks with his " << this->myWeapon->getType() << std::endl;
}

void			HumanB::setWeapon(Weapon& newWeapon){
	this->myWeapon = &newWeapon;
}
