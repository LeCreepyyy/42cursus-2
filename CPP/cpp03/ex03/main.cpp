/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:44:24 by creepy            #+#    #+#             */
/*   Updated: 2023/10/20 14:14:30 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap rob("rob");
    rob.whoAmI();
    rob.attack("phone");
    std::cout << "HP = " << rob.getHitPoints() << std::endl;
    std::cout << "EP = " << rob.getEnergyPoints() << std::endl;
    std::cout << "AD = " << rob.getAttackDamage() << std::endl;
    return (0);
}
