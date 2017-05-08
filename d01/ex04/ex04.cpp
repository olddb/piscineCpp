/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 01:11:51 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/04 01:17:35 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int					main(){
	std::string		str;

	std::string		*ptr;
	std::string&	ref = str;
	ptr = &str;
	str = "HI THIS IS BRAIN";
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
