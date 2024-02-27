/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:37:25 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/27 12:55:41 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLCLASS_HPP
# define ALLCLASS_HPP

# include <string>
# include <iostream>
# include <cstdlib>

    class Base {
        public :
            virtual ~Base(void);
    };

    class A : public Base {};

    class B : public Base {};

    class C : public Base {};

#endif