/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 22:53:32 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/06 22:53:33 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <math.h>

class Fixed {

	public:

		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const param);
		Fixed(float const param);
		~Fixed(void);

		Fixed &		operator=(Fixed const & rhs);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
	
	private:
		int _fixedPoint;
		static const int _storeInt = 8;
		
};

std::ostream &operator<<(std::ostream& o, Fixed const & i);

#endif
