/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:34:05 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:34:06 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void) {
	FragTrap	ft("#YOLO");
	FragTrap	ft2(ft);
	FragTrap	ft3 = ft2;

	ScavTrap	st("#YOLO");
	ScavTrap	st2(st);
	ScavTrap	st3 = st2;

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

	st.rangedAttack("other");
	st.meleeAttack("other");
	st.takeDamage(32);
	st2.takeDamage(150);
	st3.takeDamage(0);
	st3.beRepaired(0);
	st3.beRepaired(150);
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
	st.challengeNewcomer("other");
}
