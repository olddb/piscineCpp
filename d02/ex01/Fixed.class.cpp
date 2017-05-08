/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 22:53:27 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/06 22:53:28 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed (void) : _fixedPoint(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed (Fixed const & src)  : _fixedPoint(0){

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed (int const param) : _fixedPoint(param << _storeInt) {

	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed (float const param) : _fixedPoint(roundf(param * (1 << _storeInt))) {

	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed (void) {

	std::cout << "Destructor called" << std::endl;
}


Fixed &		Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPoint = rhs.getRawBits();
	return *this;
}

float	Fixed::toFloat(void)const {

	return ((float)this->_fixedPoint / (1 << this->_storeInt));
}

int		Fixed::toInt(void) const {

	return (this->_fixedPoint >> this->_storeInt);
}

int		Fixed::getRawBits(void) const {

//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {

	this->_fixedPoint = raw;
}

std::ostream		&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
