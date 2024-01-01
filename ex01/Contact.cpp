#include "Contact.hpp"

Contact& Contact::operator=(const Contact &other)
{
	for (int i=0; i!=5; ++i)
		this->index[i] = other.index[i];
	return (*this);
}

Contact::Contact(std::string first, std::string last, std::string nick, std::string number, std::string secret)
{
	index[0] = first;
	index[1] = last;
	index[2] = nick;
	index[3] = number;
	index[4] = secret;
}

void	Contact::print(void)
{
	std::cout << "First Name: " << index[0] << std::endl;
	std::cout << "Last Name: " << index[1] << std::endl;
	std::cout << "Nickname: " << index[2] << std::endl;
	std::cout << "Phone Number: " << index[3] << std::endl;
	std::cout << "Darkest Secret: " << index[4] << std::endl;
}

const std::string	Contact::getIndex(int n)
{
	return (index[n]);
}

void	Contact::setIndex(int n, const std::string str)
{
	index[n] = str;
}
