/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:04:04 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/01 10:13:54 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _n(0) {
    this->_span = new int[_n];
    std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _n(n) {
    this->_span = new int[_n];
    std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span& copy) : _n(copy._n) {
    std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& copy) {
    this->_n = copy._n;
    return (*this);
}

Span::~Span(void) {
    std::cout << "Span destructor called" << std::endl;
}

unsigned int Span::getN(void) {
    return (this->_n);
}
