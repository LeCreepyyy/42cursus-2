/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:38:08 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/05 15:26:23 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

	class Weapon {
		private :
			std::string _type;
		public :
			Weapon(void);
			Weapon(std::string type);
			~Weapon(void);
			void	setType(std::string type);
			std::string&	getType(void);
	};

#endif
