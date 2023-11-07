/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:54 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/07 15:33:21 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

    class Ice {
        private :
            std::string _type;
        public :
            Ice(void);
            Ice(std::string type);
            Ice(const Ice& copy);
            virtual ~Ice(void);
            Ice& operator=(const Ice& cls);
            std::string& getType(void);
            Ice* clone(void) const;
            void use(ICharacter& target);
    };

#endif