/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:22:41 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/20 13:11:34 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

    class RPN {
        private :
            std::stack<int> mStack;
        public :
            RPN(void);
            RPN(const RPN& original);
            RPN& operator=(const RPN& originial);
            ~RPN(void);

            void push(int n);
            int get(void);
            void calculate(char op);
            void end(void);
            void swap(void);
    };

#endif