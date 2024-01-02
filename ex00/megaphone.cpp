#include <iostream>

void	str_toupper(std::string &str);

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::string str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << str;
	}
	for (int i=1; i < argc; ++i)
	{
		std::string str = argv[i];
		str_toupper(str);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}

void	str_toupper(std::string &str)
{
	for	(int i=0; str[i]; ++i)
		str[i] = std::toupper(str[i]);
}
