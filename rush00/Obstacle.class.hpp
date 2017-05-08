/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Obstacle.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:00:59 by lscopel           #+#    #+#             */
/*   Updated: 2015/11/08 15:00:34 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBSTACLE_CLASS_HPP
# define OBSTACLE_CLASS_HPP

# include "Item.class.hpp"

class	Obstacle : public Item {
	
	public:
		Obstacle(void);
		Obstacle(Obstacle const& src);
		~Obstacle(void);

		Obstacle&	operator=(Obstacle const& rhs);
};

#endif
