/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:51:43 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/04 15:25:37 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

	class Zombie {
		private :
			std::string _name;
		public :
			Zombie(void);
			Zombie(std::string name);
			~Zombie(void);
			std::string	getName(void);
			void	setName(std::string name);
			void	announce(void);
			Zombie* zombieHorde( int N, std::string name );
	};

#endif
