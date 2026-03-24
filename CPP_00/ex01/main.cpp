#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
	PhoneBook	phoneBook;
	std::string	command;

	while (true)
	{
		std::cout << PhoneBook::translate(PhoneBook::PRMPT_COMMAND);
		if (!std::getline(std::cin, command))
			break;
		if (command == PhoneBook::translate(PhoneBook::CMD_ADD))
		{
			if (!phoneBook.addContact())
				break;
		}
		else if (command == PhoneBook::translate(PhoneBook::CMD_SEARCH))
			phoneBook.searchContacts();
		else if (command == PhoneBook::translate(PhoneBook::CMD_EXIT))
			break;
		else if (!command.empty())
			std::cout << PhoneBook::translate(PhoneBook::MSG_INVALID_COMMAND) << std::endl;
	}
	return 0;
}
