/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 13:52:14 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/02 16:07:26 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void		print_upper(char *s)
{
	while(*s)
		std::cout << (char)toupper(*s++);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
		print_upper(argv[i++]);
	if (i == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
