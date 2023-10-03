/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:38:40 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/03 10:49:58 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

	# include <string>

	class Contact {
		private :
			std::string _first_name;
			std::string _last_name;
			std::string _nickname;
			std::string _phone_number;
			std::string _darkest_secret;
		public :
			Contact(void);
			~Contact(void);

			std::string getFirstName(void);
			void setFirstName(std::string str);

			std::string getLastName(void);
			void setLastName(std::string str);

			std::string getNickname(void);
			void setNickname(std::string str);

			std::string getPhoneNumber(void);
			void setPhoneNumber(std::string str);

			std::string getDarkestSecret(void);
			void setDarkestSecret(std::string str);
	};

#endif
