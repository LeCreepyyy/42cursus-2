/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:46:11 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/14 11:10:34 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <map>

    class BitcoinExchange {
        private:
            std::map<std::string, float> map;
        public:
            BitcoinExchange(void);
            BitcoinExchange(const BitcoinExchange& original);
            BitcoinExchange& operator=(const BitcoinExchange& original);
            ~BitcoinExchange(void);
            
            bool parsing(std::string data);
            std::map<std::string, float> getMap(void);
            void setMap(std::string str, float value);
    };

#endif