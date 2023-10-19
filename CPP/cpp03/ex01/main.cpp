/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:44:24 by creepy            #+#    #+#             */
/*   Updated: 2023/10/19 09:29:37 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap selene("Selene");
    ClapTrap rob("rob");
    selene.attack("bird");
    rob.attack("Selene");
    selene.takeDamage(rob.getAttackDamage());
    selene.guardGate();
    std::cout << selene.getName() << " : " << "HP=" << selene.getHitPoints() << " | EP=" << selene.getEnergyPoints() << " | AD=" << selene.getAttackDamage() << std::endl;
    return (0);
}
