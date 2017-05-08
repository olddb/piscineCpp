/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:35:53 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:35:54 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap (void) {

	set();
	return ;
}

void		NinjaTrap::set(){
	this->_hitPoints = 60;
	this->_hitPointsMax = 60;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_meleeAttackDam = 60;
	this->_rangedAttackDam = 5;
	this->_armorDamRed = 0;
}

NinjaTrap::NinjaTrap (std::string name){
	this->_name = name;
	set();
	return ;
}

NinjaTrap::NinjaTrap (NinjaTrap const& src) {

	*this = src;
	return ;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const& rhs) {

	this->_hitPoints = rhs._hitPoints;
	this->_hitPointsMax = rhs._hitPointsMax;
	this->_energyPoints = rhs._energyPoints;
	this->_energyPointsMax = rhs._energyPointsMax;
	this->_meleeAttackDam = rhs._meleeAttackDam;
	this->_rangedAttackDam = rhs._rangedAttackDam;
	this->_armorDamRed = rhs._armorDamRed;
	return *this;

}

NinjaTrap::~NinjaTrap (void) {

	return ;
}

void 		NinjaTrap::ninjaShoebox(ClapTrap clapy){
	clapy.takeDamage(5);
	std::cout << "\033[1;32m(Shuebox on Clappy) Take that Clapy !\"\033[0m\n" << std::endl;
}
void 		NinjaTrap::ninjaShoebox(ScavTrap scavy){
	scavy.takeDamage(5);
	std::cout << "\033[1;32m(Shuebox on scavy) Take that Scavy !\"\033[0m\n" << std::endl;
}
void 		NinjaTrap::ninjaShoebox(FragTrap fragy){
	fragy.takeDamage(5);
	std::cout << "\033[1;32m(Shuebox on Clappy) Take that fragy !\"\033[0m\n" << std::endl;
}
void 		NinjaTrap::ninjaShoebox(NinjaTrap falsefriend){
	falsefriend.takeDamage(5);
	std::cout << "\033[1;32m(Shuebox on Clappy) Take that falsefriend !\"\033[0m\n" << std::endl;
}
