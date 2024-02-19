/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:18:48 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 10:52:22 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void    Bureaucrat::setGrade(int newGrade) {
    if (newGrade >= 1 && newGrade <= 150)
        this->_grade = newGrade;
    else if (newGrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        throw Bureaucrat::GradeTooLowException();
}

void    Bureaucrat::upgradeGrade(void) {
    try {
        this->setGrade(this->_grade - 1);
    }
    catch(const Bureaucrat::GradeTooHighException& tooHigh) {
        std::cerr << tooHigh.what() << std::endl;
    }
}

void    Bureaucrat::downGrade(void) {
    try {
        this->setGrade(this->_grade + 1);
    }
    catch(const Bureaucrat::GradeTooLowException& tooLow) {
        std::cerr << tooLow.what() << std::endl;
    }
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
    return ("/ERROR/ : Grade too low");
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(const Form::GradeTooLowException& tooLow) {
        std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << tooLow.what() << std::endl;
    }
    
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (out);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    try {
        this->setGrade(grade);
    }
    catch (const Bureaucrat::GradeTooHighException& tooHigh) {
        std::cerr << tooHigh.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& tooLow) {
        std::cerr << tooLow.what() << std::endl;
    }
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Bureaucrat destructor called" << std::endl;
}
