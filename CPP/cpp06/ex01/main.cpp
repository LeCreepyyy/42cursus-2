/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:22:29 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/22 14:07:48 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void) {
    Data *ptr = NULL;
    std::cout << "Before: " << ptr->value << std::endl;
    uintptr_t raw = Serialize::serialize(ptr);
    ptr = Serialize::deserialize(raw);
    std::cout << "After: " << ptr->value << std::endl;
}