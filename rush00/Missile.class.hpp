/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 17:57:18 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/08 15:00:24 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_CLASS_HPP
# define MISSILE_CLASS_HPP

#include "Obstacle.class.hpp"

class			Missile: public Obstacle {

	public:

		Missile(void);
		virtual ~Missile(void);
		Missile(Missile const &rhs);


		Missile &	operator=(Missile const & rhs);
};


#endif
