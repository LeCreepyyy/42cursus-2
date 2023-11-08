/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:54 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 21:18:24 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

    class Cure : public AMateria {
        private :
            std::string _type;
        public :
            Cure(void);
            Cure(const Cure& copy);
            ~Cure(void);
            Cure& operator=(const Cure& cls);
            std::string const& getType(void) const;
            Cure* clone(void) const;
            void use(ICharacter& target);
    };

#endif