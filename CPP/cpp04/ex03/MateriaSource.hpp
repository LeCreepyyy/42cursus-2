/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:08:25 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/07 15:22:22 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"

    class MateriaSource {
        public :
            MateriaSource(void);
            MateriaSource(const MateriaSource& copy);
            MateriaSource& operator=(const MateriaSource& cls);
            virtual ~MateriaSource(void);
            void    learnMateria(AMateria* m);
            AMateria* createMateria(std::string const& type);
    };

#endif
