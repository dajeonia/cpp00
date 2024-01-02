#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

std::string	ft_chop(std::string str);

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

int	PhoneBook::table(void)
{
	const std::string index[4] = {"Index", "First Name", "Last Name", \
		"Nickname"};
	const char	sep = ':';

	if (size == 0)
		return (0);
	for (int i=0; i!=4; ++i)
		std::cout << sep << "==========";
	std::cout << sep << std::endl;
	for (int i=0; i!=4; ++i)
		std::cout << sep << std::setw(10) << std::internal << index[i];
	std::cout << sep << std::endl;
	for (int i=0; i!=4; ++i)
		std::cout << sep << "==========";
	std::cout << sep << std::endl;
	for (int i=0; i!=size; ++i)
	{
		std::cout << sep << std::setw(10) << i+1;
		std::cout << sep << std::setw(10) << ft_chop(book[i].getIndex(0));
		std::cout << sep << std::setw(10) << ft_chop(book[i].getIndex(1));
		std::cout << sep << std::setw(10) << ft_chop(book[i].getIndex(2));
		std::cout << sep << std::endl;
	}
	for (int i=0; i!=4; ++i)
		std::cout << sep << "==========";
	std::cout << sep << std::endl;
	return (1);
}

void	PhoneBook::add(void)
{
	std::string			temp;
	const std::string	prompt[5] = {"First Name", "Last Name", \
		"Nickname", "Phone Number", "Darkest Secret"};
	Contact				ct;

		std::cout << "\033[0;33m" << "ADD" << std::endl << "\033[0;39m";
	for (int i=0; i!= 5; ++i)
	{
		std::cout << "What your " << prompt[i] << "? ";
		getline(std::cin, temp);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl;
			break ;
		}
		if (temp == "")
		{
			std::cout << "\033[0;33m" << "ADD: Empty input" << std::endl << "\033[0;39m";
			--i;
			continue ;
		}
		ct.setIndex(i, temp);
	}
	push(ct);
}

void	PhoneBook::search(void)
{
	while (true)
	{
		if (table() == 0)
		{
			std::cout << "\033[0;33m" << "SEARCH: Phonebook is empty" << std::endl << "\033[0;39m";
			return ;
		}
		std::cout << "\033[0;33m" << "SEARCH" << std::endl << "\033[0;39m";
		std::cout << "\033[0;33m" << "Index> " << "\033[0;39m";
		std::string buf;
		getline(std::cin, buf);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl;
			break ;
		}
		else if (buf == "EXIT")
			break ;
		const char *cbuf = buf.c_str();
		int index = atoi(cbuf);
		if (1 <= index && index <= size)
		{
			book[index - 1].print();
			break ;
		}
		else
			std::cout << "\033[0;33m" << "SEARCH: Invalid index" << std::endl << "\033[0;39m";
	}
}
