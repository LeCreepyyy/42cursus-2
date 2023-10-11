/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:24:53 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/12 00:59:28 by creepy           ###   ########.fr       */
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
	std::cout << "Int constructor called" << std::endl;
	//this->setRawBits(number);
	this->_fixedPoints = number << this->_fragBits;
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called" << std::endl;
	//this->_fixedPoints = static_cast<float>(number) / 100;
	this->_fixedPoints = static_cast<int>(number * (1 << this->_fragBits) + 0.5);
}

Fixed&	Fixed::operator=(const Fixed& fix) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoints = fix.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fix) {
	out << fix.toFloat();
	return (out);
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
	return (this->_fixedPoints / static_cast<float>(1 << this->_fragBits));
	//return (static_cast<float>(this->_fixedPoints));
}

int Fixed::toInt( void ) const {
	return (this->_fixedPoints >> this->_fragBits);
	//return (static_cast<int>(this->_fixedPoints * 100));
}
