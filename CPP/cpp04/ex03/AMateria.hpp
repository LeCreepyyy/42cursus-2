/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:41:01 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/09 14:20:10 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

    class AMateria {
        protected :
            const std::string _type;
        public :
            AMateria(void);
            AMateria(std::string const& type);
            AMateria(const AMateria& copy);
            //AMateria& operator=(const AMateria& cls);
            virtual ~AMateria(void);

            virtual std::string const& getType(void) const;
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
    };

#endif