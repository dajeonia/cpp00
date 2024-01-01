#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

std::string	ft_chop(std::string str);

class	Contact
{
	private:
		std::string name;
		std::string number;
	public:
		Contact() {};
		Contact(std::string _name, std::string _number)
		{
			this->name = _name;
			this->number = _number;
		}
		void	setName(std::string _name)
		{
			name = _name;
		}
		void	setNumber(std::string _number)
		{
			number = _number;
		}
		std::string	getName(void) const
		{
			return (this->name);
		}
		std::string	getNumber() const
		{
			return (this->number);
		}
};

class	PhoneBook
{
	private:
		std::vector<Contact>	book;
	public:
		void	add(void)
		{
			std::string	_name;
			std::string	_number;
			Contact		contact;
				
			std::cout << "New!" << std::endl;
			std::cout << "What your name? ";
			getline(std::cin, _name);
			std::cout << "What your phone number? ";
			getline(std::cin, _number);
			contact.setName(_name);
			contact.setNumber(_number);
			if (book.size() == 8)
				book.erase(book.begin());
			book.push_back(contact);
		}
		void	search(void)
		{
			std::cout << '|';
			std::cout << "==========";
			std::cout << '|';
			std::cout << "==========";
			std::cout << '|';
			std::cout << "==========";
			std::cout << '|' << std::endl;
			for (std::vector<Contact>::iterator iter = book.begin(); \
					iter != book.end(); \
					++iter)
			{
				std::cout << '|';
				std::cout << std::setw(10) << std::right << std::distance(book.begin(), iter);
				std::cout << '|';
				std::cout << std::setw(10) << std::right << ft_chop((*iter).getName());
				std::cout << '|';
				std::cout << std::setw(10) << std::right << ft_chop((*iter).getNumber());
				std::cout << '|' << std::endl;
			}
			std::cout << '|';
			std::cout << "==========";
			std::cout << '|';
			std::cout << "==========";
			std::cout << '|';
			std::cout << "==========";
			std::cout << '|' << std::endl;
			std::cout << "Which index you find? ";
			
		}
};

std::string	ft_chop(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += '.';
	}
	return (str)5
}

int	main(void)
{
	std::string	input;
	PhoneBook	mybook;

	std::cout << "Welcome to PhoneBook by dajeon!" << std::endl;
	while (1)
	{
		std::cout << "\033[0;31m" << "PhoneBook> " << "\033[0;39m";
		getline(std::cin, input);
		if (std::cin.eof() == 1 || input == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			break ;
		}
		if (input == "ADD")
		{
			mybook.add();
			std::cout << "New contact added!" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "Searching..." << std::endl << "..." << std::endl;
			mybook.search();
		}
	}
	return (0);
}

