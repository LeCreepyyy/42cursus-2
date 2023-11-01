/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 01:50:00 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 02:16:30 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

    class WrongCat : public WrongAnimal {
        public :
            WrongCat(void);
            WrongCat(const WrongCat& copy);
            WrongCat& operator=(const WrongCat& cls);
            ~WrongCat(void);
            void    makeSound(void)const;
    };

#endif