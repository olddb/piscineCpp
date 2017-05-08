/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:33:21 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:45:53 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


//Canonical
ScavTrap::ScavTrap (void) : _hitPoints(100), _energyPoints(50), _level(1), _hitPointsMax(100){

	std::cout << "(defaultConstr) Hey everybody! Check out my package!" << std::endl;
	return ;
}

ScavTrap::ScavTrap (ScavTrap const & src) : _hitPoints(100), _energyPoints(50), _level(1), _hitPointsMax(100) {

	*this = src;
	std::cout << "(cpyConstr) Hey everybody! Check out my package!" << std::endl;
	return ;
}

ScavTrap & 			ScavTrap::operator=(ScavTrap const & rhs) {

	this->_hitPoints = rhs._hitPoints;
	this->_hitPointsMax = rhs.getHitPointsMax();
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_hitPoints = rhs._hitPoints;
	return *this;
}

ScavTrap::~ScavTrap (void) {

	std::cout << "(destructor of instance) I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return ;
}





//Additional Constr
ScavTrap::ScavTrap (std::string name) : _hitPoints(100), _energyPoints(50), _level(1), _hitPointsMax(100), _name(name) {

	std::cout << "(stringConstr) Hey everybody! Check out my package!" << std::endl;
	return ;
}





//Getters
int			ScavTrap::getHitPointsMax(void) const {
	return this->_hitPointsMax;
}





//Member Funct
void		ScavTrap::rangedAttack(std::string const & target) {

	std::string rtn;
	rtn = "Oh! Jeez! FR4G-TP <" + this->_name + "> fight <";
	rtn += target + "> causing <";
	std::cout << rtn;
	std::cout << this->_rangedAttackDam;
	std::cout <<"> points of damage ! Crit-i-cal" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target) {

	std::string rtn;
	rtn = "Oh Jeez! FR4G-TP <" + this->_name + "> fight <";
	rtn += target + ">  at range, causing <";
	std::cout << rtn;
	std::cout  << this->_rangedAttackDam << "> points of damage ! Crit-i-cal" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount) {

	amount = (static_cast<int>(amount - this->_armorDamRed));
	int			int_amount;

	int_amount = amount;
	this->_energyPoints -= int_amount;
	if (this->_energyPoints < 0)
		this->_energyPoints = 0;
	int_amount = int_amount < 0 ? 0 : int_amount;
	std::string rtn;
	rtn = "Extra ouch! FR4G-TP <" + this->_name + "> took  <" ;
	std::cout << rtn;
	std::cout << int_amount;
	std::cout << "> points of damage ! Ow hohoho, that hurts!" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount) {

	int			int_amount;

	int_amount = amount;
	if (int_amount + this->_energyPoints > this->_energyPointsMax){
		int_amount = this->_energyPointsMax - this->_energyPoints;
		int_amount = int_amount < 0 ? 0 : int_amount;
		this->_energyPoints = this->_energyPointsMax;
	}
	else
		this->_energyPoints = this->_energyPoints + int_amount;
	std::string rtn;
	rtn = "FR4G-TP <" + this->_name + "> regained  <" ;
	std::cout << rtn;
	std::cout << int_amount;
	std::cout << "> life points back!" << std::endl;
}

void		ScavTrap::challengeNewcomer (std::string name) {
	srand(time(NULL));
	std::string pool[] = { "Stupid five", "Stupid three", "Stupid four", "Stupid two", "Stupid one" };
	std::cout	<< "FR4G-TP " << name << " is challenged to " << pool[rand() % 5] << std::endl;
}
