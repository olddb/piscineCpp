/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:09 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 18:24:10 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human (void) {

	return ;
}

Human::~Human (void) {

	return ;
}

const Brain&		Human::getBrain() const {
	return (this->brain);
}

std::string Human::identify() const {

	return (this->brain.identify());
}
