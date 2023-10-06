/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:26:59 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/06 14:34:13 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

	class Harl {
		private :
			void debug( void );
			void info( void );
			void warning( void );
			void error( void );
		public :
			Harl(void);
			~Harl(void);
			void complain( std::string level );
	};

#endif
