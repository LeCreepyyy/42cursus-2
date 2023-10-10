/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:24:53 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/10 14:37:50 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fragBits = 8;

Fixed::Fixed(void) : _fixedPoints(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fix) : _fixedPoints(fix._fixedPoints) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
	this->setRawBits(number);
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoints = toFloat();
	this->_fixedPoints = number;
}

Fixed&	Fixed::operator=(const Fixed& fix) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoints = fix.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoints);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoints = raw;
}

float Fixed::toFloat( void ) const {
	return (static_cast<float>(this->_fixedPoints));
}

int Fixed::toInt( void ) const {
	return (static_cast<int>(this->_fixedPoints));
}
