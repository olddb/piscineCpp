
#include "User.class.hpp"

int		User::_nbInst = 0;

User::User(void) {
	return;
}

User::~User(void) {
	return;
}

void		User::setAll(void){
	setFirstName();
	setLastName();
	setNickname();
	setLogin();
	setPostalAddress();
	setEmailAddress();
	setPhoneNumber();
	setBirthdayDate();
	setFavoriteMeal();
	setUnderwearColor();
	setDarkestSecret();
	setIndex(get_nbInst());
	incr_nbInst();
}

void		User::getAll(void){
	std::cout << "\033[1;31mFirst Name  = " << getFirstName() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mLast Name   = " << getLastName() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mNickname    = " << getNickname() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mLogin       = " << getLogin() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mPostal adr. = " << getPostalAddress() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mEmail adr.  = " << getEmailAddress() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mPhone nbr.  = " << getPhoneNumber() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mBirthday    = " << getBirthdayDate() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mMeal        = " << getFavoriteMeal() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mUnderwear   = " << getUnderwearColor() << "\033[0m" << std::endl;
	std::cout << "\033[1;31mSecret      = " << getDarkestSecret() << "\033[0m" << std::endl;
}

std::string		search_index(int index)
{
	std::string	rtn;

	rtn = std::to_string(index);
	rtn += "         ";
	rtn += "\033[1;31m|\033[0m";
	return rtn;
}

std::string		clean(std::string in)
{
	std::string	rtn;
	int			diff;

	diff = (10 - in.length());
	rtn = in;
	if (diff > 0)
		while (diff--)
			rtn += ' ';
	else if (diff == 0)
		rtn[9] = '.';
	rtn += "\033[1;31m|\033[0m";
	return (rtn);
}

std::string		User::getSearch(void){
	std::string	output;

	output = search_index(this->index);
	output += clean(this->first_name.substr(0, 10));
	output += clean(this->last_name.substr(0, 10));
	output += clean(this->nickname.substr(0, 10));
	return output;
}

int			User::get_nbInst(){
	return (_nbInst);
}

void		User::incr_nbInst(){
	_nbInst++;
}

int			User::setIndex(int index) {
	this->index = index;
	return (0);
}

int			User::getIndex(void){
	return (this->index);
}

int			User::setFirstName(void) {
	std::cout << "What's the contact's First Name ?" << std::endl;
	if (std::getline(std::cin, this->first_name) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getFirstName(void){
	return this->first_name;
}

int			User::setLastName(void) {
	std::cout << "What's the contact's Last Name ?" << std::endl;
	if (std::getline(std::cin, this->last_name) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getLastName(void){
	return this->last_name;
}

int			User::setNickname(void) {
	std::cout << "What's the contact's Nickname ?" << std::endl;
	if (std::getline(std::cin, this->nickname) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getNickname(void){
	return this->nickname;
}

int			User::setLogin(void) {
	std::cout << "What's the contact's login ?" << std::endl;
	if (std::getline(std::cin, this->login) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getLogin(void){
	return this->login;
}

int			User::setPostalAddress(void) {
	std::cout << "What's the contact's Postal Address ?" << std::endl;
	if (std::getline(std::cin,this->postal_address) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getPostalAddress(void){
	return this->postal_address;
}

int			User::setEmailAddress(void) {
	std::cout << "What's the contact's Email ?" << std::endl;
	if (std::getline(std::cin, this->email_address) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getEmailAddress(void){
	return this->email_address;
}

int			User::setPhoneNumber(void) {
	std::cout << "What's the contact's Phone Number ?" << std::endl;
	if (std::getline(std::cin, this->phone_number) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getPhoneNumber(void){
	return this->phone_number;
}

int			User::setBirthdayDate(void) {
	std::cout << "What's the contact's Birthday date ?" << std::endl;
	if (std::getline(std::cin, this->birthday_date) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getBirthdayDate(void){
	return this->birthday_date;
}

int			User::setFavoriteMeal(void) {
	std::cout << "What's the contact's Favorite Meal ?" << std::endl;
	if (std::getline(std::cin, this->favorite_meal) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getFavoriteMeal(void){
	return this->favorite_meal;
}

int			User::setUnderwearColor(void) {
	std::cout << "What's the contact's Underwear Color ?" << std::endl;
	if (std::getline(std::cin, this->underwear_color) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getUnderwearColor(void){
	return this->underwear_color;
}

int			User::setDarkestSecret(void) {
	std::cout << "What's the contact's Darkest Secret ?" << std::endl;
	if (std::getline(std::cin, this->darkest_secret) == 0)
		std::exit(0);
	return (0);
}

std::string		User::getDarkestSecret(void){
	return this->darkest_secret;
}
