/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:46:44 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/03 17:00:04 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

	# include <string>
	# include "Contact.class.hpp"

	class PhoneBook {
		private :
			int		_size;
			int		_current;
			int		_max;
			Contact *_contacts;
		public :
			PhoneBook(void);
			~PhoneBook(void);
			int		isprintable(std::string str);
			void	addContact(const Contact& contact);
			void	writeContacts(void);
			void	writeInfo(std::string buffer);
	};

#endif
