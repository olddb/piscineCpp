/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:56:17 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 12:31:25 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class			ZombieHorde{
	public:

		ZombieHorde(int N);
		~ZombieHorde(void);

		void			setZombieType(std::string type);
		void			randomChump(void);
		void			del_tab();
		void			announce();
		std::string		_type;
		Zombie			*tab_z;
		int				n;
};

#endif
