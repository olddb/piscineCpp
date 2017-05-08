/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:33:32 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:33:34 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class	ScavTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap &		operator=(ScavTrap const & rhs);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string name);
		int				getHitPointsMax(void) const ;

		std::string	getName(void) const;

	private:
		unsigned int				_hitPoints;
		int							_energyPoints;
		int							_level;
		unsigned int	_hitPointsMax;
		static const int	_energyPointsMax = 50;
		static const unsigned int	_meleeAttackDam = 20;
		static const unsigned int	_rangedAttackDam = 15;
		static const unsigned int	_armorDamRed = 3;
		std::string			_name;
};

#endif
