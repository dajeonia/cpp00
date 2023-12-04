/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:37:09 by dajeon            #+#    #+#             */
/*   Updated: 2023/12/04 14:38:19 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	str_toupper(std::string &str);

int	main(int argc, char *argv[])
{
	std::string	str;

	if (argc == 1)
	{
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << str;
	}
	for (int i=1; i < argc; ++i)
	{
		str = argv[i];
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
