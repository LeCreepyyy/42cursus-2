/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:45:16 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 10:38:35 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

    class ClapTrap {
        protected :
            std::string _name;
            int _hitPoints;
            int _energyPoints;
            int _attackDamage;
        public :
            // Constructor & Destructor
            ClapTrap(void);
            ClapTrap(std::string _name);
            ClapTrap(const ClapTrap& name);
            ~ClapTrap(void);
            ClapTrap& operator=(const ClapTrap& copy);

            // get
            std::string getName(void);
            int     getHitPoints(void);
            int     getEnergyPoints(void);
            int     getAttackDamage(void);

            // function
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
    };

#endif
