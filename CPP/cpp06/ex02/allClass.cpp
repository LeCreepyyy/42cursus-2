/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:52:00 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/26 14:16:47 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allClass.hpp"
#include <cstdlib>

Base::Base(void) {
    std::cout << "Base default constructor called" << std::endl;
}

Base::~Base(void) {
    std::cout << "Base destructor called" << std::endl;
}

Base* Base::generate(void) {
    Base* instance;
    srand(time(0));
    int rnd = rand() % 3;
    if (rnd == 0) {
        instance = new A();
        //std::cout << "A" << std::endl;
    }
    else if (rnd == 1) {
        instance = new B();
        //std::cout << "B" << std::endl;
    }
    else {
        instance = new C();
        //std::cout << "C" << std::endl;
    }
    return (instance);
}

void Base::identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "p is class A" << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout << "p is class B" << std::endl;
    }
    else {
        std::cout << "p is class C" << std::endl;
    }
}

void Base::identify(Base& b) {
    if (dynamic_cast<A*>(&b)) {
        std::cout << "b is class A" << std::endl;
    }
    else if (dynamic_cast<B*>(&b)) {
        std::cout << "b is class B" << std::endl;
    }
    else {
        std::cout << "b is class C" << std::endl;
    }
}
