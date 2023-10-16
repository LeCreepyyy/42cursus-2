/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:23:25 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/16 14:40:25 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

	class Fixed {
		private :
			int	_fixedPoints;
			static const int	_fragBits;
		public :
			// constructor | destructor
			Fixed(void);
			Fixed(const Fixed& fix);
			Fixed(const int number);
			Fixed(const float number);
			~Fixed(void);

			// overload operator
			float operator+(const Fixed& fix);
			float operator-(const Fixed& fix);
			float operator*(const Fixed& fix);
			float operator/(const Fixed& fix);

			bool operator>(const Fixed& fix);
			bool operator<(const Fixed& fix);
			bool operator>=(const Fixed& fix);
			bool operator<=(const Fixed& fix);
			bool operator==(const Fixed& fix);
			bool operator!=(const Fixed& fix);

			Fixed& operator++();
			Fixed operator++(int);
			Fixed& operator--();
			Fixed operator--(int);

			// functions
			static const Fixed& max(const Fixed& a, const Fixed& b);
			static Fixed& max(Fixed& a, Fixed& b);
			static const Fixed& min(const Fixed& a, const Fixed& b);
			static Fixed& min(Fixed& a, Fixed& b);
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;
	};
	std::ostream& operator<<(std::ostream& out, const Fixed& fix);

#endif
