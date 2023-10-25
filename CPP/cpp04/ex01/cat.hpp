/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:40:18 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 01:29:19 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "animal.hpp"

    class Cat : public Animal {
        private :
            ;
        public :
            Cat(void);
            Cat(const Cat& copy);
            Cat& operator=(const Cat& cls);
            ~Cat(void);
            void    makeSound(void)const;
    };

#endif