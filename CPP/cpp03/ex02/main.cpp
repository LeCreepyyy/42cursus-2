/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:44:24 by creepy            #+#    #+#             */
/*   Updated: 2023/10/19 11:40:59 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap fragy("fragy");
    fragy.attack("cat");
    std::cout << "But this cat are robots eater !!" << std::endl;
    fragy.takeDamage(40);
    std::cout << "3 minute later, Fragy are hidden with you" << std::endl;
    fragy.highFivesGuys();
    return (0);
}
