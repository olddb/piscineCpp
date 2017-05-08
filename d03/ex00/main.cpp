/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:32:51 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:32:52 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	ft("Toto");
	FragTrap	ft1;
	FragTrap	ft2(ft);
	FragTrap	ft3 = ft2;

	ft.rangedAttack("other");
	ft.meleeAttack("other");
	ft.takeDamage(32);
	ft2.takeDamage(150);
	ft3.takeDamage(0);
	ft3.beRepaired(0);
	ft3.beRepaired(150);
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");
	ft.vaulthunter_dot_exe("other");

	return (0);
}
