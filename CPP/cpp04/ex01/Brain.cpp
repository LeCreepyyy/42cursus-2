/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:59:04 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 10:12:21 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
    *this = copy;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void) {
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& cls) {
    *this->_ideas = *cls._ideas;
    std::cout << "Brain copy assignation called" << std::endl;
    return (*this);
}

std::string Brain::getIdeas(int index) {
    return (this->_ideas[index]);
}

void    Brain::setIdeas(int index, std::string& value) {
    this->_ideas[index] = value;
}
