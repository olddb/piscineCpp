/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 21:08:58 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 21:09:00 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &weapon) : myWeapon(weapon), name(Name){
}

HumanA::~HumanA(void){
}

void			HumanA::attack(void){
	std::cout << this->name << " attacks with his " << this->myWeapon.getType() << std::endl;
}


