/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:54:51 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/27 13:39:55 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
    Intern tomHolland;
    Form *doc;

    doc = tomHolland.makeForm("non", "zendaya");
    
    Bureaucrat spdm("Spider-Man", 1);
    if (doc != NULL) {
        std::cout << "---" << std::endl;
        spdm.signForm(*doc);
        spdm.executeForm(*doc);
        std::cout << "---" << std::endl;
    }
    delete doc;
}
