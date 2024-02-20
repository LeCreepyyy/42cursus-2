/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:14:57 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/20 13:41:42 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

    class Intern {
        public :
            Intern(void);
            Intern(const Intern& copy);
            Intern& operator=(const Intern& copy);
            ~Intern(void);
            Form* makeForm(std::string name, std::string target);

            class FormNotFound : public std::exception
            {
                public :
                    virtual const char* what() const throw();
            };
    };

#endif