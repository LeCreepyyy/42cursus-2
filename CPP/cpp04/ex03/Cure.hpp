/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:54 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 15:12:00 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class ICharacter;

    class Cure : public AMateria {
        private :
            std::string _type;
        public :
            Cure(void);
            Cure(std::string type);
            Cure(const Cure& copy);
            virtual ~Cure(void);
            Cure& operator=(const Cure& cls);
            std::string& getType(void);
            Cure* clone(void) const;
            void use(ICharacter& target);
    };

#endif