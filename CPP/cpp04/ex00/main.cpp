/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:52:36 by creepy            #+#    #+#             */
/*   Updated: 2023/10/26 15:13:04 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main(void) {
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    meta->makeSound();
    dog->makeSound();
    cat->makeSound();
    delete meta;
    delete dog;
    delete cat;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    wrongMeta->makeSound();
    wrongCat->makeSound();
    delete wrongMeta;
    delete wrongCat;
    return 0;
}