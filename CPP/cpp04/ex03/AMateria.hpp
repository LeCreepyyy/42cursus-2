/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:41:01 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/02 15:23:20 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

    class AMateria {
        protected :
            std::string _type;
        public :
            AMateria(void);
            AMateria(std::string& type);
            AMateria(const AMateria& copy);
            AMateria& operator=(const AMateria& cls);
            virtual ~AMateria(void);

            std::string const& getType(void) const;
            virtual AMateria* clone() const = 0;
            //virtual void use(ICharacter& target);
    };

#endif