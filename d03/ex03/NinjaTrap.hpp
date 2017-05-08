/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:35:58 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:35:59 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAPP_HPP
# define NINJATRAPP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {

	public:
		NinjaTrap(void);
		NinjaTrap(std::string str);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		NinjaTrap&	operator=(NinjaTrap const& rhs);

		void		ninjaShoebox(ClapTrap clapy);
		void		ninjaShoebox(ScavTrap scavy );
		void		ninjaShoebox(FragTrap fragy);
		void		ninjaShoebox(NinjaTrap falsefriend);
		void		set(void);
};

#endif
