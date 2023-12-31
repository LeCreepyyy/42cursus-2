/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:52:36 by creepy            #+#    #+#             */
/*   Updated: 2023/11/02 14:34:32 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main(void) {
    //Animal *meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    cat->makeSound();
    dog->makeSound();
    delete cat;
    delete dog;
    return 0;
}