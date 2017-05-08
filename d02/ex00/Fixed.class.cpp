/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 22:52:47 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/06 22:52:48 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed (void) : _fixedPoint(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed (Fixed const & src)  {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed (void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &		Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPoint = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {

	this->_fixedPoint = raw;
}
