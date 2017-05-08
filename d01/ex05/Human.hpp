/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:24:16 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 18:24:17 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
# include "Brain.hpp"

class Human {

	public:
		Human(void);
		~Human(void);
		const Brain brain;
		const Brain& getBrain() const;
		std::string	identify() const;
};

#endif

