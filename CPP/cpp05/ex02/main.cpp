/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:54:51 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/14 14:51:40 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    
    {
        Bureaucrat bc("Toby");
        Form form("paper", 55, 85);

        try {
            bc.setGrade(57);
            std::cout << bc;
            std::cout << form;
            bc.signForm(form);
            std::cout << form;
        }
        catch(const Bureaucrat::GradeTooHighException& tooHigh) {
            std::cerr << tooHigh.what() << std::endl;
        }
        catch(const Bureaucrat::GradeTooLowException& tooLow) {
            std::cerr << tooLow.what() << std::endl;
        }
    }
}
