/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:18:48 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/14 13:29:38 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name) : _grade(150) ,_name(name) {
    std::cout << "Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Destructor called" << std::endl;
}

void    Bureaucrat::setGrade(int newGrade) {
    if (newGrade >= 1 && newGrade <= 150)
        this->_grade = newGrade;
    else if (newGrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        throw Bureaucrat::GradeTooLowException();
}

void    Bureaucrat::upgradeGrade(void) {
    this->setGrade(this->_grade - 1);
}

void    Bureaucrat::downGrade(void) {
    this->setGrade(this->_grade + 1);
}

int Bureaucrat::getGrade(void) {
    return (this->_grade);
}

std::string Bureaucrat::getName(void) {
    return (this->_name);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("/ERROR/ : Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("/ERROR/ : Grade too high");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (out);
}
