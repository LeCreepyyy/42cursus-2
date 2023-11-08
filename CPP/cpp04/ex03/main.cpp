/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:37:09 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 22:09:21 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void) {
    std::cout << "----" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << "----" << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("ice");
    tmp = src->createMateria("cure");
    std::cout << "----" << std::endl;
    ICharacter* me = new Character("me");
    me->equip(tmp);
    me->equip(tmp);
    std::cout << "----" << std::endl;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "----" << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}
