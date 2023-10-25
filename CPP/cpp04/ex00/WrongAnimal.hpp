/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 01:51:35 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 02:17:18 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

    class WrongAnimal {
        protected :
            std::string _type;
        public :
            WrongAnimal(void);
            WrongAnimal(std::string type);
            WrongAnimal(const WrongAnimal& copy);
            WrongAnimal& operator=(const WrongAnimal& cls);
            virtual ~WrongAnimal(void);
            virtual void    makeSound(void)const;
            std::string getType(void)const;
    };

#endif