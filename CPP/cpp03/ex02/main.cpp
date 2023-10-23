/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:44:24 by creepy            #+#    #+#             */
/*   Updated: 2023/10/23 14:25:02 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap fragy("fragy");
    fragy.attack("cat");
    std::cout << "But this cat are robots eater !!" << std::endl;
    fragy.takeDamage(5);
    std::cout << "3 minute later, Fragy are hidden with you" << std::endl;
    fragy.highFivesGuys();
    std::cout << "FragTrap | AD=" << fragy.getAttackDamage() << " | EP=" << fragy.getEnergyPoints() << " | HP=" << fragy.getHitPoints() << std::endl;
    return (0);
}
