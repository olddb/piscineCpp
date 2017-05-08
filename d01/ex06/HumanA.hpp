/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 21:09:23 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 21:09:26 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class			HumanA{
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void		attack(void);

		Weapon		&myWeapon;
		std::string	name;
};

#endif
