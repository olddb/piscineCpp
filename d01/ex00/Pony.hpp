/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 14:07:32 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 17:56:50 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class							Pony {
	public:
		Pony(void);
		~Pony(void);

		void		 			do_thing(void);
		static void				ponyOnTheHeap(void);
		static void				ponyOnTheStack(void);
		std::string				_name;
};

#endif
