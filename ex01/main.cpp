#include "PhoneBook.hpp"
#include <iostream>

void	prompt(PhoneBook& book);

int	main(void)
{
	PhoneBook book;

	/*
	Contact dajeon("Daengmyeong", "Jeon", "dajeon", "010-8205-2328", "Hi");
	book.push(dajeon);
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
		std::string prompt;

		getline(std::cin, prompt);
		if (prompt == "ADD")
			book.add();
		else if (prompt == "SEARCH")
			book.search();
		else if (prompt == "EXIT" || std::cin.eof())
		{
			std::cout << "Goodbye!" << std::endl;
			break ;
		}
	}
}
