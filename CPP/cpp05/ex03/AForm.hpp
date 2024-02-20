/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:41:14 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 10:40:15 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

    class Bureaucrat;

    class Form {
        protected :
            bool _sign;
            const int _gradeForSign;
            const int _gradeForExec;
            const std::string _name;
        public :
            Form(void);
            Form(std::string name, int gradeForSign, int gradeForExec);
            Form(const Form& name);
            virtual ~Form(void);
            Form& operator=(const Form& copy);

            virtual void beSigned(Bureaucrat& bureaucrat);

            virtual bool getSign(void);
            virtual int getGradeSign(void);
            virtual int getGradeExec(void);
            virtual std::string getName(void)const;

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

            class FormNotSignException : public std::exception
            {
                public :
                    virtual const char* what() const throw();
            };

            virtual void execute(Bureaucrat const & executor) const = 0;
    };
    std::ostream& operator<<(std::ostream& out, Form& form);

#endif