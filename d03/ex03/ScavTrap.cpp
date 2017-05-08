/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:36:05 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:36:06 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



ScavTrap::ScavTrap (void) {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	std::cout << "\031[1;34m((defaultConstr) ScavTrap : Hey everybody! Check out my package!\"\033[0m\n" << std::endl;
	return ;
}

ScavTrap::ScavTrap (std::string name) {

	(void)name;
	std::cout << "\033[1;34m(stringConstr) Hey everybody! Check out my package!\"\033[0m\n" << std::endl;
	return ;
}

ScavTrap::ScavTrap (ScavTrap const & src) {

	*this = src;
	std::cout << "\033[1;34m(cpyConstr) Hey everybody! Check out my package!\"\033[0m\n" << std::endl;
	return ;
}

ScavTrap & 			ScavTrap::operator=(ScavTrap const & rhs) {

	(void)rhs;
	this->_hitPoints = rhs._hitPoints;
	this->_hitPointsMax = rhs._hitPointsMax;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_hitPoints = rhs._hitPoints;
	return *this;
}

ScavTrap::~ScavTrap (void) {

	std::cout << "\033[1;34m(destructor of instance) I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\"\033[0m\n" << std::endl;
	return ;
}

void		ScavTrap::challengeNewcomer (std::string name) {
	srand(time(NULL));
	std::string pool[] = { "Stupid five", "Stupid three", "Stupid four", "Stupid two", "Stupid one" };
	std::cout	<< "FR4G-TP " << name << " is challenged to " << pool[rand() % 5] << std::endl;
}
