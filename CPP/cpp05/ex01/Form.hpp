/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:41:14 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/14 14:34:11 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

    class Bureaucrat;

    class Form {
        private :
            bool _sign;
            const int _gradeForSign;
            const int _gradeForExec;
            const std::string _name;
        public :
            Form(void);
            Form(std::string name, int gradeForSign, int gradeForExec);
            Form(const Form& name);
            ~Form(void);
            Form& operator=(const Form& copy);

            void beSigned(Bureaucrat& bureaucrat);

            bool getSign(void);
            int getGradeSign(void);
            int getGradeExec(void);
            std::string getName(void);

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
    std::ostream& operator<<(std::ostream& out, Form& form);

#endif