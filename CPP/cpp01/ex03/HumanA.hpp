/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:53:28 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/05 15:36:24 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

	class HumanA {
		private :
			std::string _name;
			Weapon& _weapon;
		public :
			HumanA(std::string name, Weapon& weapon_info);
			~HumanA(void);
			void	setName(std::string name);
			std::string	getName(void);
			void	attack(void);
	};

#endif
