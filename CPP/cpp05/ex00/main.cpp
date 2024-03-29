/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:54:51 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/15 10:58:50 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    
       Bureaucrat bc("Tomy", 89);

       std::cout << bc;
       bc.downGrade(); // 89 -> 90
       bc.downGrade(); // 90 -> 91
       std::cout << bc;
       bc.upgradeGrade(); // 91 -> 90
       std::cout << bc;
       bc.setGrade(150); // set grade 150
       std::cout << bc;
       bc.downGrade(); // too low message
       std::cout << bc;
}
