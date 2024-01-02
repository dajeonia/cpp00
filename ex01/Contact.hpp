#ifndef CONTACT_HPP
# include <iostream>
# include <string>
#endif

class Contact {
private:
	std::string	index[5];
public:
	Contact() {}
	Contact(const std::string[5]);
	~Contact() {}

	Contact& operator=(const Contact& other);
	Contact(const Contact& other) { *this = other; }

	std::string at(int n) const;
	void printDetails(void) const;
};
