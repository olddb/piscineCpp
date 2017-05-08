/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:31:26 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 23:24:20 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class					Zombie {
	public :

		Zombie(std::string type, std::string name);
		~Zombie(void);
		void			announce(void);
		void			setName(std::string name);
		void			setType(std::string type);

	private:
		std::string		_name;
		std::string		_type;
};

#endif
