#ifndef CONTACT_HPP
# include <iostream>
# include <string>
#endif

class Contact {
private:
	std::string	index[5];
public:
	Contact() {}
	Contact(std::string, std::string, std::string, std::string, std::string);
	~Contact() {}

	Contact& operator=(const Contact& other);
	// Contact(const Contact& other) { this = other; }

	void				print(void);
	const std::string	getIndex(int n);
	void				setIndex(int n, std::string str);
};
