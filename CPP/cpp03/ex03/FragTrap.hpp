/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:47:13 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/20 13:10:57 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

	class FragTrap : virtual public ClapTrap {
		public :
			FragTrap(void);
			FragTrap(std::string name);
			~FragTrap(void);
			void highFivesGuys(void);
	};

#endif
