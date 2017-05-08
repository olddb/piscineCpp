/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:38:10 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 18:30:53 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void		memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete(panthere);
}
