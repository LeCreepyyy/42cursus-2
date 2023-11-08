/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:56:14 by creepy            #+#    #+#             */
/*   Updated: 2023/11/08 21:04:00 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

    class Character : public ICharacter {
        private :
            const std::string _name;
            AMateria* _inv[4];
        public :
            Character(void);
            Character(std::string name);
            Character(const Character& copy);
            Character& operator=(const Character& cls);
            ~Character();
            std::string const& getName() const;
            void equip(AMateria* m);
            void unequip(int idx);
            void use(int idx, ICharacter& target);
    };

#endif