/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:35:41 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:35:42 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Canonical
FragTrap::FragTrap (void) {

	_level += 1;
	_level -= 1;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	std::cout << "\033[1;31m(defaultConstr) Fragtrap: \"Let's get this party started!\"\033[0m\n" << std::endl;
	return ;
}

FragTrap::FragTrap (FragTrap const & src) {

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	*this = src;
	std::cout << "\033[1;31m(Copy Constr) Fragtrap: \"Let's get this party started!\"\033[0m\n" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const & rhs){

	std::cout << "\033[1;31m(equal overload) Fragtrap: \"Let's get this party started!\"\033[0m\n" << std::endl;
	this->_hitPoints = rhs._hitPoints;
	this->_hitPointsMax = rhs.getHitPointsMax();
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_hitPoints = rhs._hitPoints;
	return *this;
}

FragTrap::~FragTrap () {

	std::cout << "\033[1;31m(destructor of FragTrap) Argh arghargh death gurgle gurglegurgle urgh... death.\033[0m\n" << std::endl;
	return ;
}

//Additional Constr
FragTrap::FragTrap (std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	std::cout << "\033[1;31m(contr by Name) Fragtrap: \"Let's get this party started!\"\033[0m\n" << std::endl;
	return ;
}




//Member Funct
void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energyPoints < 25) {
		std::cout	<< "FR4G-TP " << _name << " doesn't have enough energy!" << std::endl;
		return;
	}
	this->_energyPoints -= 25;
	std::string pool[] = { "Gizmo Beam", "Shredding Power", "Turbine Rush",
		"Bolt Attack", "Bane Bullet" };
	srand(time(NULL));
	std::cout	<< "FR4G-TP " << _name << " uses " << pool[rand() % 5] << " on " << target << std::endl;
}
