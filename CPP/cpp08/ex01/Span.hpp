/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:01:55 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/01 11:32:33 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <cstdlib>

    class Span {
        private :
            int* _span;
            unsigned int _n;
        public :
            Span(void);
            Span(unsigned int n);
            Span(const Span& copy);
            Span& operator=(const Span& copy);
            ~Span(void);

            void addNumber(int nbr);
            unsigned int getN(void);
            int shortestSpan(void);
            int longestSpan(void);

            class spanIsFull : public std::exception {
                public :
                    virtual const char* what() const throw();
            };
    };

#endif