/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:37:09 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/02 15:31:48 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void) {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    ICharacter* me = new Character("me");
    src->learnMateria(new Cure());
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}