#include "PhoneBook.hpp"
#include <iostream>

void	prompt(PhoneBook& book);

int	main(void)
{
	Contact dajeon("Daengmyeong", "Jeon", "dajeon", "010-8205-2328", "Hi");
	Contact yonghyle("Yonghyeon", "Lee", "yonghyle", "010-9232-1123", "Hi");
	Contact seok("Sewon", "Ok", "seok", "010-4582-9394", "Hi");

	PhoneBook book;

	book.push(dajeon);
	book.push(yonghyle);
	book.push(seok);

	prompt(book);
	return (0);
}

void	prompt(PhoneBook& book)
{
	std::cout << "Welcome to PhoneBook by dajeon!" << std::endl;
	while (true)
	{
		// std::cout << "\033[0;31m" << "PhoneBook> " << "\033[0;39m";
		std::cout << "PhoneBook> ";
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
