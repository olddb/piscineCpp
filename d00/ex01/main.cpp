/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 14:33:32 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 17:16:06 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.class.hpp"

void		search_user(User *tab)
{
	int		max;
	int		i;
	int		choosed_contact;
	std::string	input;

	i = 0;
	max = User::get_nbInst();
	while (i < max)
	{
		std::cout << tab[i].getSearch() << std::endl;
		i++;
	}
	std::cout << "\033[1;31mWhat's your choice ? \033[0m"<< std::endl;
	if (std::getline(std::cin, input) == 0)
		std::exit(0);
	choosed_contact = std::stoi(input);
	if (choosed_contact < 0 || choosed_contact >= max)
		std::cout << "\033[1;31mTrying to make me segfault ?\033[0m"<< std::endl;
	else
		tab[choosed_contact].getAll();
	return ;
}

void		add_user(User *tab, int index)
{
	tab[index].setAll();
	std::cout << "\033[1;31mYou have " << (8 - User::get_nbInst()) << " free places for contacts\033[0m"<< std::endl;
	std::cout << tab[index].getFirstName() << std::endl;
}

int				take_input()
{
	static User tab_user[8];
	std::string	input;
	int			index;

	index = User::get_nbInst();
	if (std::getline(std::cin, input) == 0)
		std::exit(0);
	else if (!input.compare("EXIT"))
		std::exit(0);
	else if(!input.compare("ADD"))
	{
		if (index >= 8)
			std::cout << "\033[1;31mToo much contact for my memory\033[0m" << std::endl;
		else
			add_user(tab_user, index);
	}
	else if(!input.compare("SEARCH"))
		search_user(tab_user);
	else
		std::cout << "\033[1;31mWrong Input\033[0m" << std::endl;
	return (0);
}

int			main()
{
	while (42){
		std::cout << ">";
		take_input();
	}
	return (0);
}
