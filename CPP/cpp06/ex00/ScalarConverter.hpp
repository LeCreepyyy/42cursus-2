/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:11:21 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/21 14:39:03 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

# define _CHAR 0
# define _INT 1
# define _FLOAT 2
# define _DOUBLE 3

    class ScalarConverter {
        public :
            static void convert(std::string arg);
    };

#endif