#ifndef PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
#endif

class PhoneBook
{
	private:
		Contact	book[8];
		int		size;
	public:
		PhoneBook() : size(0) {}
		~PhoneBook() {}

		void	push(Contact ct);
		void	table(void);
		void	add(void);
		void	search(void);
};
