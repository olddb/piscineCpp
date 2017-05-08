/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 22:52:52 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/06 22:52:53 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed {

	public:

		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &		operator=(Fixed const & rhs);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);

	
	private:
		int _fixedPoint;
		static const int _storeInt = 8;
		
};

#endif
