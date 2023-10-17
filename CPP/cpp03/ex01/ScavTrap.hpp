/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:09:14 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/17 15:05:49 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

	class ScavTrap : public ClapTrap {
		public :
			ScavTrap(void);
			ScavTrap(std::string name);
			~ScavTrap(void);
			//void attack(std::string& target);
	};

#endif
