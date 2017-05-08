/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 20:07:55 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 23:54:03 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type){
	std::cout << "Ho my god, they are coming !" << std::endl;
	this->_type = type;
}

ZombieEvent::~ZombieEvent(){
	std::cout << "Nice, we survive this event !\n" << std::endl;
	return ;
}

Zombie			*ZombieEvent::newZombie(std::string name){
	return (new Zombie(name, this->_type));
}

void			ZombieEvent::setZombieType(std::string type){
	this->_type = type;
}

void			ZombieEvent::randomChump(void){
	int RandIndex = rand() % 4;

	std::string textArray[4] = {"MmeCake", "MmeToast", "MrButter", "MrJelly"};
	Zombie		*fresh_zombie = new Zombie(this->_type, textArray[RandIndex]);
	delete fresh_zombie;
}
