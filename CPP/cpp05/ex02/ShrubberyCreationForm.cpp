/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:03:29 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 10:38:09 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137) ,_target("none") {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) ,_target(target) {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form("ShrubberyCreationForm", 145, 137) ,_target(copy._target) {
    *this = copy;
    std::cout << "ShrubberyCreationForm copy cinstructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    _target = copy._target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) {
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->_gradeForExec)
        throw Bureaucrat::GradeTooLowException();
    else if (_sign == false)
        throw Form::FormNotSignException();
    else {
        std::cout << "trees" << std::endl;
    }
}
