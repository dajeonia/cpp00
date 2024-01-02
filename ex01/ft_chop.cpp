#include <iostream>
#include <string>

std::string	ft_chop(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += '.';
	}
	return (str);
}

void	ft_putline(int width, int column, const char sep)
{
	for (int i=0; i!=column; ++i)
	{
		std::cout << sep;
		for (int j=0; j!=width; ++j)
			std::cout << "=";
	}
	std::cout << sep << std::endl;
}
