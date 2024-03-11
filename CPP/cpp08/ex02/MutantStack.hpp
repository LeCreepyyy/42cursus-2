/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:45:09 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/11 10:49:28 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

    # include <iostream>
    # include <string>
    # include <stack>
    # include <deque>

    template<typename T, class Container = std::deque<T> >
    class MutantStack : public std::stack<T, Container> { 
        public :
            MutantStack(void) {
                std::cout << "MutantStack default constructor called" << std::endl;
            }

            MutantStack(const MutantStack& base) : std::stack<T, Container>(base) {}

            MutantStack& operator=(const MutantStack& base) {
                if (&base != this)
                    static_cast<std::stack<T, Container> >(*this) = base;
                std::cout << "MutantStack copy assignation called" << std::endl;
                return (*this);
            }

            ~MutantStack(void) {
                std::cout << "MutantStack detructor called" << std::endl;
            }

            typedef typename std::deque<T>::iterator iterator;

            MutantStack operator--() {
                --(this->c);
                return (this->c);
            }

            iterator begin() {
                return this->c.begin();
            }

            iterator end() {
                return this->c.end();
            }
        };

#endif