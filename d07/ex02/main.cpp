/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 18:16:12 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/12 21:02:40 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.cpp"
#include <iostream>

int main(){
	int	i = 10;
	Array<int>	t(i);

	try{int b = t[-1];
	std::cout << b << std::endl;}
	catch(std::exception &e){std::cout << e.what() << std::endl;}

	try{int b = t[1];
	std::cout << b << std::endl;}
	catch(std::exception &e){std::cout << e.what() << std::endl;}

	i = 10;

	Array<std::string>	y(i);
	std::string str;
	str = "salutlescopaings";
	y[2] = str;

	try{std::string b = y[2];
	std::cout << b << std::endl;}
	catch(std::exception &e){std::cout << e.what() << std::endl;}

	try{std::string b = y[1];
	std::cout << b << std::endl;}
	catch(std::exception &e){std::cout << e.what() << std::endl;}
}
