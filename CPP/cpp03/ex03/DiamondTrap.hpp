/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:38:40 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/25 10:40:06 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

	class DiamondTrap : virtual public ScavTrap, virtual public FragTrap {
		private :
			std::string _name;
		public :
			DiamondTrap(void);
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap& copy);
			virtual ~DiamondTrap(void);
			DiamondTrap& operator=(const DiamondTrap &src);
			void attack(std::string target);
            int     getHitPoints(void);
            int     getEnergyPoints(void);
            int     getAttackDamage(void);
			void whoAmI();
	};

#endif
