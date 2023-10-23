/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:09:14 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/23 13:38:13 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

	class ScavTrap : virtual public ClapTrap {
		public :
			ScavTrap(void);
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& copy);
			~ScavTrap(void);
			ScavTrap& operator=(const ScavTrap& cls);
			void attack(std::string target);
			void guardGate();
	};

#endif
