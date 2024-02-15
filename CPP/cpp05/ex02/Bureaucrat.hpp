/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:48:44 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/14 14:34:24 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

    class Form;

    class Bureaucrat {
        private :
            int _grade;
            const std::string _name;
        public :
            Bureaucrat(std::string name);
            ~Bureaucrat(void);
            int getGrade(void);
            std::string getName(void);
            void    setGrade(int newGrade);
            void    upgradeGrade(void);
            void    downGrade(void);

            void    signForm(Form& form);
            
            class GradeTooHighException : public std::exception
            {
                public :
                    virtual const char* what() const throw();
            };

            class GradeTooLowException : public std::exception
            {
                public :
                    virtual const char* what() const throw();
            };
    };
    std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);

#endif