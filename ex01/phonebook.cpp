#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string name;
		std::string number;
	public:
		Contact(std::string _name, std::string _number)
		{
			name(_name);
			number(_number);
		}
		void	setName(std::string n)
		{
			name = n;
		}
		void	setNumber(std::string num)
		{
			phoneNumber =  num;
		}
		void	getName(void) const
		{
			return (name);
		}
		void	getNumber() const
		{
			return (phoneNumber);
		}
}

class	PhoneBook
{
	private:
		Contact[8]	book;
		int			size = 0;
	public:
		void	add(void) const
		{
			std::string	name;
			std::string	number;
			Contact		c_new;
				
			std::cout << "New!" << std::endl;
			std::cout << "What your name? "
			getline(cin, name);
			std::cout << "What your phone number? "
			getline(cin, number);
			c_new.setName(name);
			c_new.setNumber(number);
			if (size == 8)
				book[0] = c_new;
			else

			}
		}
		void	search()
		{
			
		}
}

int	main(void)
{
	while (1)
	{

	}
}
