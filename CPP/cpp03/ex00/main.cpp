/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:44:24 by creepy            #+#    #+#             */
/*   Updated: 2023/10/16 23:46:15 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap robot("Rob");
    std::cout << "Hit Points : " << robot.getHitPoints() << " | Energy Points : " << robot.getEnergyPoints() << std::endl;
    robot.attack("wall");
    std::cout << robot.getName() << " takes a beating ! (-2)" << std::endl;
    robot.takeDamage(2);
    robot.beRepaired(1);
    std::cout << "Hit Points : " << robot.getHitPoints() << " | Energy Points : " << robot.getEnergyPoints() << std::endl;

    ClapTrap robot2("Bob");
    std::cout << "Hit Points : " << robot2.getHitPoints() << " | Energy Points : " << robot2.getEnergyPoints() << std::endl;
    std::cout << "Explosion !" << std::endl;
    robot2.takeDamage(10);
    robot2.attack("other robot");
    robot2.beRepaired(3);
    std::cout << "Hit Points : " << robot2.getHitPoints() << " | Energy Points : " << robot2.getEnergyPoints() << std::endl;
    return (0);
}