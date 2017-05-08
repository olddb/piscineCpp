/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 15:05:45 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/12 14:42:45 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T, typename L, typename F>
void	iter(T *array, L size, F f){
	while (--size >= 0)
		f(array[size]);
}

template<typename U>
int		print(U i){
	std::cout << i << std::endl;
	return (0);
}


int		main(){
	std::cout << "\033[1;33mPassing int array :\033[0m\n";
	int *z  = new int[10];
	z[0] = 4242;
	z[1] = 42;
	z[2] = 42;
	z[3] = 42;
	z[4] = 42;
	iter(z, 10, print<int>);

	std::cout << std::endl;
	std::cout << "\033[1;33mPassing string array :\033[0m\n";
	std::string str[2];
	str[0] = "Bien";
	str[1] = "Marche";
	str[2] = "Ca ";
	iter(str, 3, print<std::string>);
}
