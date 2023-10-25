/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:52:36 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 02:13:48 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main(void) {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    delete meta;
    delete i;
    delete j;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    wrongMeta->makeSound();
    wrongCat->makeSound();
    delete wrongMeta;
    delete wrongCat;
    return 0;
}