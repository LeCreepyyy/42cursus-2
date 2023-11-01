/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:59:08 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/26 15:36:12 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "animal.hpp"

    class Brain {
        private :
            std::string _ideas[100];
        public :
            Brain(void);
            Brain(const Brain& copy);
            ~Brain(void);
            Brain& operator=(const Brain& cls);
            void    setIdeas(int index, std::string& ideas);
            std::string getIdeas(int index);
    };

#endif