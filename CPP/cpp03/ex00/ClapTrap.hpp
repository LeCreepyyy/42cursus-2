/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:45:16 by creepy            #+#    #+#             */
/*   Updated: 2023/10/16 23:07:34 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

    class ClapTrap {
        private :
            std::string _name;
            int _hitPoints;
            int _energyPoints;
            int _attackDamage;
        public :
            // Constructor & Destructor
            ClapTrap(void);
            ClapTrap(std::string _name);
            ~ClapTrap(void);

            // get
            std::string getName(void);
            int     getHitPoints(void);
            void    setHitPoints(int amount);
            int     getEnergyPoints(void);
            void    setEnergyPoints(int amount);
            int     getAttackDamage(void);

            // function
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
    };

#endif