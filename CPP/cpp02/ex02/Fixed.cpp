/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:24:53 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/16 14:51:47 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fragBits = 8;

Fixed::Fixed(void) : _fixedPoints(0) {
	;
}

Fixed::Fixed(const Fixed& fix) : _fixedPoints(fix._fixedPoints) {
	;
}

Fixed::Fixed(const int number) {
	this->_fixedPoints = number << this->_fragBits;
}

Fixed::Fixed(const float number) {
	this->_fixedPoints = static_cast<int>(number * (1 << this->_fragBits) + 0.5);
}


Fixed::~Fixed(void) {
	return;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

int	Fixed::getRawBits( void ) const {
	return (this->_fixedPoints);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoints = raw;
}

float Fixed::toFloat( void ) const {
	return (this->_fixedPoints / static_cast<float>(1 << this->_fragBits));
}

int Fixed::toInt( void ) const {
	return (this->_fixedPoints >> this->_fragBits);
}

// overload operator

float Fixed::operator+(const Fixed& fix) {
	float res = this->_fixedPoints + fix.getRawBits();
	return (res);
}

float Fixed::operator-(const Fixed& fix) {
	float res = this->_fixedPoints - fix.getRawBits();
	return (res);
}

float Fixed::operator*(const Fixed& fix) {
	float res = this->_fixedPoints * fix.getRawBits();
	return (res);
}

float Fixed::operator/(const Fixed& fix) {
	float res = this->_fixedPoints / fix.getRawBits();
	return (res);
}

Fixed& Fixed::operator++() {
	++_fixedPoints;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++_fixedPoints;
	return (tmp);
}

Fixed& Fixed::operator--() {
	--_fixedPoints;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--_fixedPoints;
	return (tmp);
}

bool Fixed::operator>(const Fixed& fix) {
	bool res = this->_fixedPoints > fix._fixedPoints;
	return (res);
}

bool Fixed::operator<(const Fixed& fix) {
	bool res = this->_fixedPoints < fix._fixedPoints;
	return (res);
}

bool Fixed::operator>=(const Fixed& fix) {
	bool res = this->_fixedPoints >= fix._fixedPoints;
	return (res);
}

bool Fixed::operator<=(const Fixed& fix) {
	bool res = this->_fixedPoints <= fix._fixedPoints;
	return (res);
}

bool Fixed::operator==(const Fixed& fix) {
	bool res = this->_fixedPoints == fix._fixedPoints;
	return (res);
}

bool Fixed::operator!=(const Fixed& fix) {
	bool res = this->_fixedPoints != fix._fixedPoints;
	return (res);
}

// global overload

std::ostream& operator<<(std::ostream& out, const Fixed& fix) {
	out << fix.toFloat();
	return (out);
}
