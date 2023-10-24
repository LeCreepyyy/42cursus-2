/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:55:23 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 01:35:35 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

    class Animal {
        protected :
            std::string _type;
        public :
            Animal(void);
            Animal(std::string type);
            Animal(const Animal& copy);
            Animal& operator=(const Animal& cls);
            virtual ~Animal(void);
            std::string getType(void)const;
            virtual void makeSound(void)const;
    };

#endif