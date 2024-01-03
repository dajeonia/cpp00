#include "Contact.hpp"

Contact::Contact(const std::string argv[5])
{
	for (int i=0; i!=5; ++i)
		index[i] = argv[i];
}

std::string	Contact::at(int n) const
{
	return (index[n]);
}

void	Contact::printDetails(void) const
{
	const std::string label[5] = \
   	{"First Name", "Last Name", "Nickname", "Phone Number", "Darkest Secret"};

	for (int i=0; i!=5; ++i)
		std::cout << label[i] << ": " << index[i] << std::endl;
}

