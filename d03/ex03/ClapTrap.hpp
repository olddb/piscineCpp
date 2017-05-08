/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:35:34 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:35:35 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class	ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap &		operator=(ClapTrap const & rhs);

		void				rangedAttack(std::string const& target);
		void				meleeAttack(std::string const& target);

		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

		void				setName(std::string Name);
		int					getHitPointsMax(void) const;

	protected:

		std::string			_name;
		const std::string	_type;
		unsigned int		_level;

		unsigned int		_hitPoints;
		unsigned int		_energyPoints;

		unsigned int		_hitPointsMax;
		unsigned int		_energyPointsMax;

		unsigned int		_meleeAttackDam;
		unsigned int		_rangedAttackDam;

		unsigned int		_armorDamRed;
};

#endif
