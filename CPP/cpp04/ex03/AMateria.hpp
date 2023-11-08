/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:41:01 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 22:15:31 by creepy           ###   ########.fr       */
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