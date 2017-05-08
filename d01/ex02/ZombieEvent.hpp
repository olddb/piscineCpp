/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:56:17 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 23:28:09 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class			ZombieEvent{
	public:

		ZombieEvent(std::string type);
		~ZombieEvent(void);

		void			setZombieType(std::string type);
		Zombie			*newZombie(std::string name);
		void			randomChump(void);
		std::string		_type;
};

#endif
