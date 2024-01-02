#include "PhoneBook.hpp"
#include <iostream>

void	prompt(PhoneBook& book);

int	main(void)
{
	PhoneBook book;

	const std::string index[5] = {"Daengmyeong", "Jeon", "dajeon", "010-8205-2328", "Hi"};
	std::string index2[5] = {"Daeil", "Jeon", "dajeon", "010-8205-2328", "Hi"};

	Contact test2(index2);
	Contact test3 = test2;

	book.push(Contact(index));
	book.push(Contact(test2));
	book.push(Contact(test3));

	prompt(book);
	return (0);
}

void	prompt(PhoneBook& book)
{
	std::cout << "Welcome to PhoneBook by dajeon!" << std::endl;
	while (true)
	{
		std::cout << "\033[0;32m" << "PhoneBook> " << "\033[0;39m";
		std::string command;

		getline(std::cin, command);
		if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else if (command == "EXIT" || std::cin.eof())
		{
			std::cout << "Goodbye!" << std::endl;
			break ;
		}
	}
}
