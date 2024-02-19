/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:41:33 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 10:42:30 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

    class RobotomyRequestForm : public Form {

        private :
            std::string _target;
            RobotomyRequestForm(void);
        public :
            RobotomyRequestForm(std::string target);
            RobotomyRequestForm(const RobotomyRequestForm& copy);
            ~RobotomyRequestForm(void);
            RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
            std::string getTarget(void);
            void execute(Bureaucrat const & executor) const;
    };

#endif