/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:33:14 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:33:15 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAPP_HPP
# define FRAGTRAPP_HPP

#include <iostream>
#include <string>

class	FragTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap &		operator=(FragTrap const & rhs);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);

		std::string		getName(void) const;
		int				getHitPointsMax(void) const;

	private:
		unsigned int				_hitPoints;
		int							_energyPoints;
		int							_level;
		unsigned int				_hitPointsMax;
		static const int			_energyPointsMax = 100;
		static const unsigned int	_meleeAttackDam = 30;
		static const unsigned int	_rangedAttackDam = 20;
		static const unsigned int	_armorDamRed = 5;
		std::string			_name;
};

#endif
