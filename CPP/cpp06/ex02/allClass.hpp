/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:37:25 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/26 11:55:01 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLCLASS_HPP
# define ALLCLASS_HPP

# include <string>
# include <iostream>

    class Base {
        public :
            Base(void);
            virtual ~Base(void);
            Base* generate(void);
            void identify(Base* p);
            void identify(Base& b);
    };

    class A : public Base {};

    class B : public Base {};

    class C : public Base {};

#endif