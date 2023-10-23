/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:38:40 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/20 13:23:01 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

	class DiamondTrap : virtual public FragTrap, virtual public ScavTrap, virtual public ClapTrap {
		private :
			std::string _name;
		public :
			DiamondTrap(void);
			DiamondTrap(std::string name);
			~DiamondTrap(void);
			void attack(std::string target);
			void whoAmI();
	};

#endif
