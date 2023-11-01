/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 01:13:24 by creepy            #+#    #+#             */
/*   Updated: 2023/10/26 15:44:46 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "animal.hpp"

    class Dog : public Animal {
        private :
            Brain *_dogBrain;
        public:
            Dog(void);
            Dog(const Dog& copy);
            Dog& operator=(const Dog& cls);
            ~Dog(void);
            void    makeSound(void)const;
    };

#endif