/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:46:09 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/20 11:14:58 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5) ,_target("none") {
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) ,_target(target) {
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form("PresidentialPardonForm", 25, 5) ,_target(copy._target) {
    *this = copy;
    std::cout << "PresidentialPardonForm copy cinstructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
    _target = copy._target;
    return (*this);
}

std::string PresidentialPardonForm::getTarget(void) {
    return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->_gradeForExec)
        throw Bureaucrat::GradeTooLowException();
    else if (_sign == false)
        throw Form::FormNotSignException();
    else {
        std::cout << _target << ", Zaphod Beeblebrox pardoned you !" << std::endl;
    }
}
