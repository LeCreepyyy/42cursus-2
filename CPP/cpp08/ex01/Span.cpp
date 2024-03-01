/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:04:04 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/01 11:37:15 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int getMax(int* span, int n) {
    int nbr = -2147483648;
    for (int i = 0; i < n; i++) {
        if (span[i] > nbr)
            nbr = span[i];
    }
    return (nbr);
}

int getMin(int* span, int n) {
    int nbr = 2147483647;
    for (int i = 0; i < n; i++) {
        if (span[i] < nbr)
            nbr = span[i];
    }
    return (nbr);
}


Span::Span(void) : _n(0) {
    this->_span = new int[_n];
    std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _n(n) {
    this->_span = new int[_n];
    std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span& copy) : _n(copy._n) {
    this->_span = new int[_n];
    std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& copy) {
    this->_n = copy._n;
    this->_span = new int[_n];
    return (*this);
}

Span::~Span(void) {
    delete this->_span;
    std::cout << "Span destructor called" << std::endl;
}

const char* Span::spanIsFull::what() const throw() {
    return ("/ERROR/ Span is full");
}

unsigned int Span::getN(void) {
    return (this->_n);
}

int Span::longestSpan(void) {
    return (getMax(this->_span, _n) - getMin(this->_span, _n));
}

int diff(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int Span::shortestSpan(void) {
    if (this->_n < 2)
        return (0);
    qsort(_span, _n, sizeof(int), diff);
    int minDiff = abs(_span[0] - _span[1]);
    for (unsigned int i = 0; i < _n - 1; i++) {
        int diff = abs(_span[i] - _span[i + 1]);
        if (diff < minDiff) 
            minDiff = diff;
    }
    return (minDiff);
}

void    Span::addNumber(int nbr) {
    static unsigned int spanPos = 0;
    try {
        if (spanPos == getN())
            throw Span::spanIsFull();
        this->_span[spanPos] = nbr;
        spanPos++;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
