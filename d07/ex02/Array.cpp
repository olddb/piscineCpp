/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 18:35:20 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/12 21:03:30 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <stdexcept>
#include <cstddef>

template<typename T>
class	Array {
	public:
		Array()
		{
			tab = new T[0];
			len = 0;
		}
		~Array()
		{ delete [] tab; }
		Array(unsigned int n)
		{
			tab = new T[n];
			len = n;
		}
		Array(Array const &rhs)
		{
			tab = new T[rhs.len];
			size_t	i = 0;
			while (i < rhs.len)
			{
				tab[i] = rhs.tab[i];
				i++;
			}
			len = rhs.len;
		}
		Array&	operator=(Array const &rhs)
		{
			delete[] tab;
			tab = new T[rhs.len];

			size_t	i = 0;
			while (i < rhs.len)
			{
				tab[i] = rhs.tab[i];
				i++;
			}
			len = rhs.len;
			return (*this);
		}
		T&		operator[](size_t i)
		{
			if (i >= len)
				throw std::exception();
			else
				return tab[i];
		}
		size_t	size()
		{ return (len); }

	protected :
		T		*tab;
		size_t	len;
};

#endif
