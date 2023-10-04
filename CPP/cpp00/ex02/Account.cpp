/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:51:35 by creepy            #+#    #+#             */
/*   Updated: 2023/10/04 10:28:08 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;

void    Account::_displayTimestamp(void) {
    std::time_t timestamp = std::time(NULL);
    struct std::tm *tm_info = std::localtime(&timestamp);

    int y = tm_info->tm_year + 1900;
    int m = tm_info->tm_mon + 1;
    int d = tm_info->tm_mday;
    int h = tm_info->tm_hour;
    int mi = tm_info->tm_min;
    int s = tm_info->tm_sec;

    std::cout << "[" << y << m << d << "_" << h << mi << s << "] ";
    return ;
}

Account::Account(int initial_deposit) {
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _accountIndex = getNbAccounts();
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amout:" << checkAmount() << ";created" << std::endl;
    _nbAccounts++;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amout:" << checkAmount() << ";closed" << std::endl;
    _nbAccounts--;
}

// display info

void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount();
    _amount += deposit;
    _nbDeposits++;
    std::cout << ";deposit:" << deposit << ";amount:" << checkAmount() << ";nb_deposits:" << _nbDeposits << std::endl;
    _totalNbDeposits++;
    _totalAmount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
    if (withdrawal > checkAmount()) {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";amount:";
    _amount -= withdrawal;
    _nbWithdrawals++;
    std::cout << checkAmount() << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    return (true);
}

int Account::checkAmount(void) const {
    return (_amount);
}

// get

int Account::getNbAccounts(void) {
    return (_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (_totalAmount);
}

int Account::getNbDeposits(void) {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (_totalNbWithdrawals);
}
