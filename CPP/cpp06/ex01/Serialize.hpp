/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:22:47 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/22 14:05:34 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <string>
# include <iostream>

typedef __intptr_t uintptr_t;

typedef struct Data_t {
    static const int value = 0;
} Data;

    class Serialize {
        public :
            Serialize(void);
            Serialize(const Serialize& copy);
            ~Serialize(void);
            Serialize& operator=(const Serialize& copy);

            static uintptr_t serialize(Data* ptr);
            static Data* deserialize(uintptr_t raw);
    };

#endif