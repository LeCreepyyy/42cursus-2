/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:37:07 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/15 14:14:49 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

    class ShrubberyCreationForm : public Form {

        private :
            std::string _target;
        public :
            ShrubberyCreationForm(void);
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(const ShrubberyCreationForm& copy);
            ~ShrubberyCreationForm(void);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
            std::string getTarget(void);
            void execute(Bureaucrat const & executor) const;
    };

#endif