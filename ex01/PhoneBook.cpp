#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

std::string	ft_chop(std::string str);
void	ft_putline(int width, int column, char sep);

void	PhoneBook::push(Contact ct)
{
	if (size == 8)
	{
		for (int i=1; i!=8; ++i)
			book[i-1] = book[i];
		book[7] = ct;
	}
	else
		book[size++] = ct;
}

void	PhoneBook::printTable(void)
{
	const std::string label[4] = {"Index", "First Name", "Last Name", "Nickname"};
	const char sep = '|';

	ft_putline(10, 4, sep);
	for (int i=0; i!=4; ++i)
		std::cout << sep << std::setw(10) << label[i];
	std::cout << sep << std::endl;
	ft_putline(10, 4, sep);
	for (int i=0; i!=size; ++i)
	{
		std::cout << sep << std::setw(10) << i+1;
		for (int j=0; j!=3; ++j)
			std::cout << sep << std::setw(10) << ft_chop(book[i].at(j));
		std::cout << sep << std::endl;
	}
	ft_putline(10, 4, sep);
}

void	PhoneBook::add(void)
{
	static const std::string label[5] \
		= {"First Name", "Last Name", "Nickname", "Phone Number", "Darkest Secret"};
	std::cout << "\033[0;33m" << "ADD" << std::endl << "\033[0;39m";
	std::string	index[5];
	for (int i=0; i!= 5; ++i)
	{
		std::string arg;
		std::cout << "What your " << label[i] << "? ";
		getline(std::cin, arg);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl;
			break ;
		}
		if (arg == "")
		{
			std::cout << "\033[0;33m" << "ADD: Empty input" << std::endl << "\033[0;39m";
			--i;
		}
		else
			index[i] = arg;
	}
	push(Contact(index));
}

void	PhoneBook::search(void)
{
	while (true)
	{
		if (size == 0)
		{
			std::cout << "\033[0;33m" << "SEARCH: Phonebook is empty" << std::endl << "\033[0;39m";
			return ;
		}
		else
			std::cout << "\033[0;33m" << "SEARCH" << std::endl << "\033[0;39m";
		printTable();
		std::cout << "Which index looking for? ";
		std::string buf;
		getline(std::cin, buf);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl;
			break ;
		}
		else if (buf == "EXIT")
			break ;
		const char *cbuf(buf.c_str());
		int index(atoi(cbuf));
		if (1 <= index && index <= size)
		{
			book[index - 1].printDetails();
			break ;
		}
		else
			std::cout << "\033[0;33m" << "SEARCH: Invalid index" << std::endl << "\033[0;39m";
	}
}
