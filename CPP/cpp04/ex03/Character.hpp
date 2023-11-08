/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:56:14 by creepy            #+#    #+#             */
/*   Updated: 2023/11/08 15:10:08 by vpoirot          ###   ########.fr       */
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
            using ICharacter::equip;
            Character(void);
            Character(std::string name);
            Character(const Character& copy);
            Character& operator=(const Character& cls);
            virtual ~Character();
            std::string const& getName() const;
            void equip(AMateria* m);
            void unequip(int idx);
            void use(int idx, ICharacter& target);
            AMateria* getInvSlot(int idx);
    };

#endif