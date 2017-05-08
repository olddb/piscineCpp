/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Item.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroche <vroche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 15:31:28 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/08 15:29:09 by vroche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITEM_CLASS_HPP
#define ITEM_CLASS_HPP

#include <iostream>

class				Item{
	public:
		Item(void);
		Item(Item const &rhs);
		virtual ~Item(void);

		Item &			operator=(Item const & rhs);

		void				set_x(int x);
		void				set_y(int y);
		void				set_height(int height);
		void				set_speed(int speed);
		void				set_activate(int active);

		int					get_activate(void) const;
		int					get_x(void) const;
		int					get_y(void) const;
		int					get_height(void) const;
		int					get_speed(void) const;

	protected:
		int					_x;
		int					_y;
		int					_height;
		unsigned int		_speed;
		int					_activate; // 0 = libre, 1=enemy/obstacle, 2=deja utilise
};

#endif
