/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:52:00 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/27 10:13:12 by vpoirot          ###   ########.fr       */
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
        std::cout << "*p is class A" << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout << "*p is class B" << std::endl;
    }
    else if (dynamic_cast<C*>(p)) {
        std::cout << "*p is class C" << std::endl;
    }
    else {
        std::cout << "Not class A B or C" << std::endl;
    }
}

void Base::identify(Base& p) {
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "&p is class A" << std::endl;
        return ;
    }
    catch (std::exception& e) {
        try {
            B b = dynamic_cast<B&>(p);
            std::cout << "&p is class B" << std::endl;
            return ;
        }
        catch (std::exception& e) {
            C c = dynamic_cast<C&>(p);
            std::cout << "&p is class C" << std::endl;
            return ;
        }
    }
    std::cout << "Not class A B or C" << std::endl;
}
