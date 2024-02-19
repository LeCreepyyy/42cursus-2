/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:43:06 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 10:44:21 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45) ,_target("none") {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) ,_target(target) {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form("RobotomyRequestForm", 72, 45) ,_target(copy._target) {
    *this = copy;
    std::cout << "RobotomyRequestForm copy cinstructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
    _target = copy._target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget(void) {
    return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->_gradeForExec)
        throw Bureaucrat::GradeTooLowException();
    else if (_sign == false)
        throw Form::FormNotSignException();
    else {
        std::cout << "robot" << std::endl;
    }
}
