/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 13:52:54 by vpailhe           #+#    #+#             */
/*   Updated: 2015/11/03 01:31:18 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_CLASS_H
# define USER_CLASS_H

#include <iostream>

class 				User {

	public:

		User(void);
		~User(void);

		std::string	getSearch(void);

		static void	incr_nbInst(void);
		static int	get_nbInst(void);

		void		setAll(void);
		void		getAll(void);

		int			setFirstName(void);
		std::string	getFirstName(void);

		int			setLastName(void);
		std::string	getLastName(void);

		int			setNickname(void);
		std::string	getNickname(void);

		int			setLogin(void);
		std::string	getLogin(void);

		int			setPostalAddress(void);
		std::string	getPostalAddress(void);

		int			setEmailAddress(void);
		std::string	getEmailAddress(void);

		int			setPhoneNumber(void);
		std::string	getPhoneNumber(void);

		int			setBirthdayDate(void);
		std::string	getBirthdayDate(void);

		int			setFavoriteMeal(void);
		std::string	getFavoriteMeal(void);

		int			setUnderwearColor(void);
		std::string	getUnderwearColor(void);

		int			setDarkestSecret(void);
		std::string	getDarkestSecret(void);

		int			setIndex(int index);
		int			getIndex();

	private:

		static int	_nbInst;

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
		int			index;

};

#endif
