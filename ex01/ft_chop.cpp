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
