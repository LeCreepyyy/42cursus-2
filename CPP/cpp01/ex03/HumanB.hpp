/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:11:26 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/05 15:46:35 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

	class HumanB {
		private :
			std::string _name;
			Weapon *_weapon;
		public :
			HumanB(std::string name);
			~HumanB(void);
			void	setName(std::string name);
			std::string	getName(void);
			void	attack(void);
			void	setWeapon(Weapon& weapon_type);
	};

#endif
