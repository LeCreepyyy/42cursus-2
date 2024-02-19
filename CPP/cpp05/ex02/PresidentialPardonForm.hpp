/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:44:49 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/19 10:46:03 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

    class PresidentialPardonForm : public Form {

        private :
            std::string _target;
            PresidentialPardonForm(void);
        public :
            PresidentialPardonForm(std::string target);
            PresidentialPardonForm(const PresidentialPardonForm& copy);
            ~PresidentialPardonForm(void);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
            std::string getTarget(void);
            void execute(Bureaucrat const & executor) const;
    };

#endif