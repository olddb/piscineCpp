/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:35:28 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:35:29 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Canonical
ClapTrap::ClapTrap (void) : _name("Clappy"), _level(1) {
	std::cout << "Clappy is operationnal" << std::endl;
}

ClapTrap::ClapTrap (ClapTrap const& src) {
	*this = src;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const& rhs) {

	this->_hitPoints = rhs._hitPoints;
	this->_hitPointsMax = rhs.getHitPointsMax();
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_hitPoints = rhs._hitPoints;
	return *this;
}

ClapTrap::~ClapTrap (void) {
	std::cout << "Clappy is dead" << std::endl;
}




//Additional Constr
ClapTrap::ClapTrap (std::string name): _name(name) {
}


//Getters
int			ClapTrap::getHitPointsMax(void) const {
	return this->_hitPointsMax;
}

//Setter
void		ClapTrap::setName(std::string Name){
	this->_name = Name;
}


//Member Funct
void		ClapTrap::beRepaired(unsigned int amount) {

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

void		ClapTrap::takeDamage(unsigned int amount) {

	int st1 = 0;
	if (amount != 0)
		st1 = (amount - this->_armorDamRed);

	int	ep;
	ep = this->_energyPoints;
	if ((ep -= st1) < 0)
		this->_energyPoints = 0;

	std::string rtn;
	rtn = "FR4G-TP <" + this->_name + "> took  <" ;
	std::cout << rtn;
	std::cout << st1;
	std::cout << "> points of damage !" << std::endl;
}



void		ClapTrap::rangedAttack(std::string const & target) {

	std::string rtn;
	rtn = "FR4G-TP <" + this->_name + "> attacks <";
	rtn += target + ">  at range, causing <";
	std::cout << rtn;
	std::cout << this->_rangedAttackDam;
	std::cout <<  "> points of damage !" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target) {


	std::string rtn;
	rtn = "FR4G-TP <" + this->_name + "> attacks <";
	rtn += target + ">  at range, causing <";
	std::cout << rtn << this->_rangedAttackDam << "> points of damage !" << std::endl;
}
