/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:11:59 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/27 13:37:35 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& copy) {
    (void)copy;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& copy) {
    std::cout << "Intern assignation operator called" << std::endl;
    (void)copy;
    return (*this);
}

Intern::~Intern(void) {
    std::cout << "Intern destructor called" << std::endl;
}

const char* Intern::FormNotFound::what() const throw() {
    return ("/ERROR/ Form not found");
}

Form* Intern::makeForm(std::string name, std::string target) {
    Form *founded = NULL;
    try {
        Form *pf[] = {new RobotomyRequestForm(target) ,new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};

    	std::string	list[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    	for (int i = 0; i < 3; i++) {
    		if (name == list[i]) {
    			founded = pf[i];
                while (++i < 3)
                    delete pf[i];
                return (founded);
    		}
            else
                delete pf[i];
    	}
        throw Intern::FormNotFound();
    }
    catch (const Intern::FormNotFound& notForm) {
        std::cout << "---" << std::endl;
        std::cout << notForm.what() << std::endl;
        std::cout << "---" << std::endl;
    }
    return (NULL);
}
