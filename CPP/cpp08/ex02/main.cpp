/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:54:24 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/11 10:34:48 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    std::list<int> lst;
    mstack.push(5);
    mstack.push(17);
    lst.push_back(5);
    lst.push_back(17);
    std::cout << "MStack : " << mstack.top() << " | List : " << lst.back() << std::endl;
    mstack.pop();
    lst.pop_back();
    std::cout << "MStack : " << mstack.size() << " | List : " << lst.size() << std::endl;
    mstack.push(3);
    lst.push_back(3);
    mstack.push(5);
    lst.push_back(5);
    mstack.push(737);
    lst.push_back(737);
    mstack.push(0);
    lst.push_back(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::list<int>::iterator lstIt = lst.begin();
    std::list<int>::iterator lstIte = lst.end();
    ++it;
    --it;
    ++lstIt;
    --lstIt;
    std::cout << "List : " << std::endl;
    while (lstIt != lstIte)
    {
        std::cout << *lstIt << std::endl;
        ++lstIt;
    }
    lstIte = lst.begin();
    std::cout << "reverse" << std::endl;
    while (lstIt != lstIte)
    {
        std::cout << *lstIt << std::endl;
        --lstIt;
    }
    std::cout << "MStack : " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    ite = mstack.begin();
    std::cout << "reverse" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        --it;
    }
    std::stack<int> s(mstack);
    return 0;
}
