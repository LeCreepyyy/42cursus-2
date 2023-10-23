/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:47:13 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/23 13:59:21 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

	class FragTrap : virtual public ClapTrap {
		public :
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(const FragTrap& copy);
			~FragTrap(void);
			FragTrap& operator=(const FragTrap& cls);
			void highFivesGuys(void);
	};

#endif
