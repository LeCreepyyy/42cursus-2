/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:39:44 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/20 13:50:45 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {
    ;
}

RPN::RPN(const RPN& original) {
    this->mStack = original.mStack;
}

RPN::~RPN(void) {
    ;
}

RPN& RPN::operator=(const RPN& original) {
    this->mStack = original.mStack;
    return (*this);
}

void RPN::push(int n) {
    mStack.push(n);
}

int RPN::get(void) {
    int top = mStack.top();
    mStack.pop();
    return (top);
}

void RPN::calculate(char op) {
    if (mStack.size() < 2)
        throw std::runtime_error("Syntax Error");
    if (op == '+')
        push(get() + get());
    if (op == '*')
        push(get() * get());
    if (op == '-')
        push(get() - get());
    if (op == '/') {
        int v1 = get();
        int v2 = get();
        if (v1 == 0 || v2 == 0)
            throw std::runtime_error("Impossible Action");
        push(v1 / v2);
    }
    std::cout << mStack.top() << std::endl;
}

void RPN::swap(void) {
    if (mStack.size() < 2)
        throw std::runtime_error("Syntax Error");
    int tmp = get();
    int tmp2 = get();
    push(tmp);
    push(tmp2);
}

void RPN::end(void) {
    if (mStack.size() > 1)
        throw std::runtime_error("Syntax Error");
}
