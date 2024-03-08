/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:45:09 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/08 14:20:45 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

    # include <iostream>
    # include <string>
    # include <stack>
    # include <deque>

    template<typename T>
    class MutantStack {
        private :
            std::deque<T> mStack;
            std::stack<T, std::deque<T> > topStack;
        public :
            MutantStack(void) {
                std::cout << "MutantStack constructor called" << std::endl;
            }
            MutantStack(const MutantStack& base) {
                base.mStack = this->mStack;
                std::cout << "MutantStack copy constructor called" << std::endl;
            }
            MutantStack& operator=(const MutantStack& base) {
                base.mStack = this->mStack;
                std::cout << "MutantStack copy assignation called" << std::endl;
                return (*this);
            }

            ~MutantStack(void) {
                std::cout << "MutantStack detructor called" << std::endl;
            }

            void push(const T& value) {
                mStack.push_back(value);
                topStack.push(value);
            }
            void pop(void) {
                mStack.pop_back();
                topStack.pop();
            }
            T& top(void) {
                return (topStack.top());
            }
            bool empty(void) {
                return (mStack.empty());
            }
            size_t size(void) {
                return (mStack.size());
            }

            typedef typename std::deque<T>::iterator iterator;

            iterator begin() {
                return mStack.begin();
            }

            iterator end() {
                return mStack.end();
            }
        };

#endif