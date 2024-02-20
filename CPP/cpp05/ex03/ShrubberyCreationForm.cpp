/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 3224/02/15 14:03:29 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 11:25:57 by vpoirot          ###   ########.fr       */
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
        std::string nameTarget = _target;
        std::ofstream fileTrees(nameTarget.append("_shrubbery").c_str());
        if (!fileTrees.is_open()) {
            std::cout << "/ERROR/ Failed to create file" << std::endl;
        }
        fileTrees.write(" 888                           \n", 32);
        fileTrees.write(" 888                           \n", 32);
        fileTrees.write(" 888                           \n", 32);
        fileTrees.write(" 888888888d888 .d88b.  .d88b.  \n", 32);
        fileTrees.write(" 888   888P\"  d8P  Y8bd8P  Y8b \n", 32);
        fileTrees.write(" 888   888    8888888888888888 \n", 32);
        fileTrees.write(" Y88b. 888    Y8b.    Y8b.     \n", 32);
        fileTrees.write("  \"Y888888     \"Y8888  \"Y8888  \n", 32);
        fileTrees.close();
    }
}
