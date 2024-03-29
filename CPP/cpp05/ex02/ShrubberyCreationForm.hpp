/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:37:07 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 10:59:30 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

    class ShrubberyCreationForm : public Form {

        private :
            std::string _target;
            ShrubberyCreationForm(void);
        public :
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(const ShrubberyCreationForm& copy);
            ~ShrubberyCreationForm(void);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
            std::string getTarget(void);
            void execute(Bureaucrat const & executor) const;
    };

#endif