/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 01:35:46 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/07 01:35:47 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAPP_HPP
# define FRAGTRAPP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap &		operator=(FragTrap const & rhs);

		void			vaulthunter_dot_exe(std::string const & target);

};

#endif
