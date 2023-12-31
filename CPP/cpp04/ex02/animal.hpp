/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:55:23 by creepy            #+#    #+#             */
/*   Updated: 2023/11/02 14:29:49 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>
# include "Brain.hpp"

    class Animal {
        protected :
            std::string _type;
        public :
            Animal(void);
            Animal(std::string type);
            Animal(const Animal& copy);
            static Animal&  getInstance(void);
            Animal& operator=(const Animal& cls);
            virtual ~Animal(void);
            std::string getType(void)const;
            virtual void makeSound(void)const = 0;
    };

#endif