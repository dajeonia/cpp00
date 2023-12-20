#include <string>
#include <iostream>

int	main(void)
{
	std::string	input;
	std::cout << "Welcome to PhoneBook by dajeon!" << std::endl;
	while (1)
	{
		std::cout << "\033[0;31m" << "PhoneBook> " << "\033[0;39m";
		getline(std::cin, input);
		if (std::cin.eof() == 1)
		{
			std::cin.clear();
			std::clearerr(stdin);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << std::endl;
			continue ;
		}
		if (input == "ADD")
			std::cout << "New contact added!" << std::endl;
		else if (input == "SEARCH")
			std::cout << "Searching..." << std::endl;
		else if (input == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			break ;
		}
		else
			;
	}
	return (0);
}
