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

void	PhoneBook::table(void)
{
	const std::string index[4] = {"Index", "First Name", "Last Name", \
		"Nickname"};
	const char	sep = ':';

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
		std::cout << sep << std::setw(10) << i;
		std::cout << sep << std::setw(10) << ft_chop(book[i].getIndex(0));
		std::cout << sep << std::setw(10) << ft_chop(book[i].getIndex(1));
		std::cout << sep << std::setw(10) << ft_chop(book[i].getIndex(2));
		std::cout << sep << std::endl;
	}
	for (int i=0; i!=4; ++i)
		std::cout << sep << "==========";
	std::cout << sep << std::endl;
}

void	PhoneBook::add(void)
{
	std::string			temp;
	const std::string	prompt[5] = {"First Name", "Last Name", \
		"Nickname", "Phone Number", "Darkest Secret"};
	Contact				ct;

	std::cout << "New!" << std::endl;
	for (int i=0; i!= 5; ++i)
	{
		std::cout << "What your " << prompt[i] << "? ";
		getline(std::cin, temp);
		if (temp == "")
		{
			std::cout << "ADD: invalid input" << std::endl;
			--i;
			continue ;
		}
		ct.setIndex(i, temp);
	}
	push(ct);
}

void	PhoneBook::search(void)
{
	int	index = -1;

	table();
	std::cout << "Please input the index: ";
	std::cin >> index;
	if (0 <= index && index < size)
		book[index].print();
	else
		std::cerr << "Invalid index" << std::endl;
}
