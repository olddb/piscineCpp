/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:33:07 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:33:08 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


//Canonical

FragTrap::FragTrap (void) :  _hitPoints(100), _energyPoints(100), _level(1), _hitPointsMax(100){

	(void)_level;
	std::cout << "(defaultConstr) Let's get this party started!" << std::endl;
	return ;
}

FragTrap::FragTrap (FragTrap const & src) : _hitPoints(100), _energyPoints(100), _level(1), _hitPointsMax(100), _name(src.getName()) {

	*this = src;
	std::cout << "(copyConstr) Let's get this party started!" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const & rhs){
	this->_hitPoints = rhs._hitPoints;
	this->_hitPointsMax = rhs.getHitPointsMax();
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_hitPoints = rhs._hitPoints;
	return *this;
}

FragTrap::~FragTrap () {

	std::cout << "(destructor of instance) Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	return ;
}





//Addtional Constructors

FragTrap::FragTrap (std::string name) : _hitPoints(100), _energyPoints(100), _level(1), _hitPointsMax(100), _name(name){

	std::cout << "(stringConstr) Let's get this party started!" << std::endl;
	return ;
}





//Getters

std::string	FragTrap::getName(void) const {
	return this->_name;
}

int			FragTrap::getHitPointsMax(void) const {
	return this->_hitPointsMax;
}





//Member Funct

void		FragTrap::rangedAttack(std::string const & target) {

	std::string rtn;
	rtn = "FR4G-TP <" + this->_name + "> attacks <";
	rtn += target + ">  at range, causing <";
	std::cout << rtn;
	std::cout << this->_rangedAttackDam;
	std::cout <<  "> points of damage !" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) {


	std::string rtn;
	rtn = "FR4G-TP <" + this->_name + "> attacks <";
	rtn += target + ">  at range, causing <";
	std::cout << rtn << this->_rangedAttackDam << "> points of damage !" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount) {

	int st1 = 0;
	if (amount != 0)
		st1 = (amount - this->_armorDamRed);

	if ((this->_energyPoints -= st1) < 0)
		this->_energyPoints = 0;

	std::string rtn;
	rtn = "FR4G-TP <" + this->_name + "> took  <" ;
	std::cout << rtn;
	std::cout << st1;
	std::cout << "> points of damage !" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount) {

	int st1 = 0;
	st1 = (amount);
	if ((st1 + this->_energyPoints) > this->_energyPointsMax){
		st1 = this->_energyPointsMax - this->_energyPoints;
		this->_energyPoints = this->_energyPointsMax;
	}
	else
		this->_energyPoints = this->_energyPoints + amount;
	std::string rtn;
	rtn = "FR4G-TP <" + this->_name + "> regained  <" ;
	std::cout << rtn;
	std::cout << amount;
	std::cout << "> life points !" << std::endl;
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
