/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:54:51 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 11:43:11 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

    Bureaucrat tr("Trees", 135);
    Bureaucrat ntr("notTrees", 146);
    Bureaucrat nstr("notSignTrees", 144);

    Form *ftr = new ShrubberyCreationForm("formTrees");

    std::cout << "----------------" << std::endl;
    tr.executeForm(*ftr);
    tr.signForm(*ftr);
    tr.executeForm(*ftr);
    std::cout << "----------------" << std::endl;
    ntr.signForm(*ftr);
    ntr.executeForm(*ftr);
    std::cout << "----------------" << std::endl;
    nstr.signForm(*ftr);
    nstr.executeForm(*ftr);
    std::cout << "----------------" << std::endl;
    
    Bureaucrat boss("manager", 1);
    Form *robot = new RobotomyRequestForm("Robot");
    Form *president = new PresidentialPardonForm("President");

    std::cout << "----------------" << std::endl;
    boss.signForm(*robot);
    boss.signForm(*president);
    std::cout << "----------------" << std::endl;
    boss.executeForm(*robot);
    std::cout << "-----" << std::endl;
    boss.executeForm(*president);
    std::cout << "----------------" << std::endl;
}
