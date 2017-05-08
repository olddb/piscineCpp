/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 14:03:09 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 18:49:53 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {
	std::cout << "I'm alive" << std::endl;
	return ;
}

Pony::~Pony(){
	std::cout << "I'm dead" << std::endl;
	return ;
}

void				Pony::ponyOnTheHeap(){
	Pony	*mlp = new Pony;
	delete (mlp);
}

void				Pony::ponyOnTheStack(){
	Pony				mlp;
}

void		Pony::do_thing(void){
	std::cout << "Rainbows are the bests" << std::endl;
};
