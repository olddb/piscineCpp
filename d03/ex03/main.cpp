/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:36:19 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:36:20 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void) {

	ScavTrap	st("#YOLO");
	FragTrap	ft("#YOLO");

	ft.vaulthunter_dot_exe("Salam");
	ClapTrap	clap;
 

	NinjaTrap	ninio;
	NinjaTrap	victime;

	ninio.ninjaShoebox(st);
	ninio.ninjaShoebox(ft);
	ninio.ninjaShoebox(clap);
	ninio.ninjaShoebox(victime);
}
