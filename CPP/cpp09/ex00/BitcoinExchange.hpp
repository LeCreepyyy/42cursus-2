/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:46:11 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/19 10:13:17 by creepy           ###   ########.fr       */
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
            std::map<std::string, double> map;
        public:
            BitcoinExchange(void);
            BitcoinExchange(const BitcoinExchange& original);
            BitcoinExchange& operator=(const BitcoinExchange& original);
            ~BitcoinExchange(void);
            
            bool parsing(std::string data);
            double getInMap(std::string date);
            void setInMap(std::string str, double value);

            class noDateFound : public std::exception {
                public :
                    virtual const char* what() const throw();
            };
    };

#endif