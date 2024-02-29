/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:16:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/29 13:27:34 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

    template<typename T>
    class Array {
        private :
            T *_arrayT;
            unsigned int _n;
        public :
            Array(void) : _n(0) {
                _arrayT = new T[_n];
                std::cout << "Default contructor called" << std::endl;
            }
            Array(unsigned int n) : _n(n) {
                _arrayT = new T[_n];
                std::cout << "Constructor called" << std::endl;
            }
            Array(const Array& copy) : _arrayT(copy._arrayT), _n(copy.getN()) {
                std::cout << "Copy constructor called" << std::endl;
            }

            ~Array(void) {
                std::cout << "destructor called" << std::endl;
                if (_arrayT != NULL)
                    delete _arrayT;
            }

            Array* operator=(const Array& copy) {
                std::cout << "Copy assignation operator called";
                this->_arrayT = copy._arrayT;
                this->_n = copy.getN();
                return (*this);
            }

            unsigned int size(void) {
                return (this->_n);
            }

            unsigned int getN(void) {
                return (this->n);
            }

            T& operator[](unsigned int index) {
                if (index < 0 || index >= this->_n)
                    throw indexOutOfBound();
                return (_arrayT[index]);
            }

            class indexOutOfBound : public std::exception {
                public :
                    virtual const char* what() const throw() {
                        return ("/ERROR/ Index is out of bound");
                    }
            };
    };

#endif