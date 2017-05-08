/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:23:49 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 18:23:52 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	return;
}

Brain::~Brain(void) {

	return;
}

std::string Brain::identify(void) const {
	
	std::stringstream hex;
	hex << this;
	return (hex.str());
}
