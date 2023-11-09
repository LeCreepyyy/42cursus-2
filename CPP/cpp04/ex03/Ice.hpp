/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:54 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/09 15:10:59 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

    class Ice : public AMateria {
        private :
            std::string _type;
        public :
            Ice(void);
            Ice(const Ice& copy);
            ~Ice(void);
            Ice& operator=(const Ice& cls);
            std::string const& getType(void) const;
            Ice* clone(void) const;
            virtual void use(ICharacter& target);
    };

#endif