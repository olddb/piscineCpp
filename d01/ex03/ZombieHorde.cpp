/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 20:07:55 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 12:32:10 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
	std::cout << "Ho my god, they are coming !" << std::endl;
	this->n = N;
	Zombie  *tab_z = new Zombie[N];
	this->tab_z = tab_z;
//	this->_type = type;
}
 
ZombieHorde::~ZombieHorde(){
	del_tab();
	std::cout << "Nice, we survive this event !\n" << std::endl;
	return ;
}

void			ZombieHorde::del_tab(){
	delete [] this->tab_z;
}

void			ZombieHorde::announce(){
	int			i;
	int			j;

	i = this->n;
	j = 0;
	while (j < i){
		this->tab_z[j].announce();
		j++;
	}
}

void			ZombieHorde::setZombieType(std::string type){
	this->_type = type;
}

/*
void			ZombieHorde::randomChump(void){
	int RandIndex = rand() % 3;

	std::string textArray[4] = {"MmeCake", "MmeToast", "MrButter", "MrJelly"};
	Zombie		*fresh_zombie = new Zombie(this->_type, textArray[RandIndex]);
	delete fresh_zombie;
}
*/
