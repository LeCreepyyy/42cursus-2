/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:20:01 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/15 12:31:48 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form(void) : _sign(false) ,_gradeForSign(1) ,_gradeForExec(1) ,_name("none") {
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string name, int gradeForSign, int gradeForExec) : _sign(false), _gradeForSign(gradeForSign), _gradeForExec(gradeForExec), _name(name) {
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form& name) : _gradeForSign(name._gradeForSign), _gradeForExec(name._gradeForExec) ,_name(name._name) {
    this->_sign = name._sign;
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void) {
    std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form& copy) {
    (void)copy; // can't use this operator
    std::cout << "Form assignation operator called" << std::endl;
    return (*this);
}

bool Form::getSign(void) {
    return (_sign);
}

int Form::getGradeSign(void) {
    return (_gradeForSign);
}

int Form::getGradeExec(void) {
    return (_gradeForExec);
}

std::string Form::getName(void) {
    return (_name);
}

void    Form::beSigned(Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > this->getGradeSign())
        throw Form::GradeTooLowException();
    else
        this->_sign = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("grade too low");
}

std::ostream& operator<<(std::ostream& out, Form& form) {
    out << form.getName() << " | " << form.getSign() << " | " << form.getGradeSign() << " | " << form.getGradeExec() << std::endl;
    return (out);
}
