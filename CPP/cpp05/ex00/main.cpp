/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:54:51 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/14 11:49:50 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    
    {
        Bureaucrat bc("Tomy");

        try {
            bc.setGrade(89);
            std::cout << bc;
            bc.downGrade(); // 89 -> 90
            bc.downGrade(); // 90 -> 91
            std::cout << bc;
            bc.upgradeGrade(); // 91 -> 90
            std::cout << bc;
            bc.setGrade(150); // set grade 150
            std::cout << bc;
            bc.downGrade(); // too low crash
            std::cout << "Should not be displayed" << std::endl;
        }
        catch(const Bureaucrat::GradeTooHighException& tooHigh) {
            std::cerr << tooHigh.what() << std::endl;
        }
        catch(const Bureaucrat::GradeTooLowException& tooLow) {
            std::cerr << tooLow.what() << std::endl;
        }
    }

    {
        Bureaucrat bc("Toby");

        try {
            bc.setGrade(89);
            std::cout << bc;
            bc.downGrade(); // 89 -> 90
            bc.downGrade(); // 90 -> 91
            std::cout << bc;
            bc.upgradeGrade(); // 91 -> 90
            std::cout << bc;
            bc.setGrade(1); // set grade 1
            std::cout << bc;
            bc.upgradeGrade(); // too high crash
            std::cout << "Should not be displayed" << std::endl;
        }
        catch(const Bureaucrat::GradeTooHighException& tooHigh) {
            std::cerr << tooHigh.what() << std::endl;
        }
        catch(const Bureaucrat::GradeTooLowException& tooLow) {
            std::cerr << tooLow.what() << std::endl;
        }
    }
}
