#include "PhoneBook.hpp"
#include <iostream>

void	prompt(PhoneBook& book);

int	main(void)
{
	PhoneBook book;

	/*
	const std::string index[5] = {"Daengmyeong", "Jeon", "dajeon", "010-8205-2328", "Hi"};
	std::string index2[5] = {"Daeil", "Jeon", "dajeon", "010-8205-2328", "Hi"};

	book.pushBack(Contact(index));
	book.pushBack(Contact(index2));
	*/
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
