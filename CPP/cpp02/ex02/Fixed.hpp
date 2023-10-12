/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:23:25 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/12 14:10:17 by vpoirot          ###   ########.fr       */
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
			Fixed(void);
			Fixed(const Fixed& fix);
			Fixed(const int number);
			Fixed(const float number);
			Fixed& operator=(const Fixed& fix);
			Fixed& operator+(const Fixed& fix);
			Fixed& operator-(const Fixed& fix);
			Fixed& operator*(const Fixed& fix);
			Fixed& operator/(const Fixed& fix);
			~Fixed(void);
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;
	};
	std::ostream& operator<<(std::ostream& out, const Fixed& fix);
	std::ostream& operator>(std::ostream& out, const Fixed& fix);
	std::ostream& operator<(std::ostream& out, const Fixed& fix);
	std::ostream& operator>=(std::ostream& out, const Fixed& fix);
	std::ostream& operator<=(std::ostream& out, const Fixed& fix);
	std::ostream& operator==(std::ostream& out, const Fixed& fix);
	std::ostream& operator!=(std::ostream& out, const Fixed& fix);

#endif
