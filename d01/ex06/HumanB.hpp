/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 21:09:51 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 21:09:53 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class			HumanB{
	public :
		HumanB(std::string name);
		~HumanB();

		void		attack(void);

		void		setWeapon(Weapon& newWeapon);
		Weapon		*myWeapon;
		std::string	name;
};

#endif
