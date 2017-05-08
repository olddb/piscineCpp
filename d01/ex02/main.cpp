/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 20:46:00 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 23:38:39 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void				test_scope(){
	ZombieEvent		ze("Witch");
	Zombie			*bitch = ze.newZombie("Bitch");
	ze.randomChump();
	delete bitch;
}

int					main()
{
	ZombieEvent		ze("Boomer");
	Zombie		*patate = ze.newZombie("Patate");
	test_scope();
	delete patate;
	return (0);
}
