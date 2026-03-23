#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() : nextIndex(0), contactCount(0)
{
}

static bool getInput(const std::string& prompt, std::string& input)
{
	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			return false;
		}
		if (!input.empty())
			return true;
		std::cout << "Field cannot be empty." << std::endl;
	}
}

static std::string formatColumn(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

bool PhoneBook::addContact()
{
	Contact		newContact;
	std::string	input;

	if (!getInput("First name: ", input))
		return false;
	newContact.setFirstName(input);
	if (!getInput("Last name: ", input))
		return false;
	newContact.setLastName(input);
	if (!getInput("Nickname: ", input))
		return false;
	newContact.setNickname(input);
	if (!getInput("Phone number: ", input))
		return false;
	newContact.setPhoneNumber(input);
	if (!getInput("Darkest secret: ", input))
		return false;
	newContact.setDarkestSecret(input);
	contacts[nextIndex] = newContact;
	nextIndex = (nextIndex + 1) % 8;
	if (contactCount < 8)
		contactCount++;
	return true;
}

static void displayContactRow(int index, const Contact& contact)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << formatColumn(contact.getFirstName()) << "|";
	std::cout << std::setw(10) << formatColumn(contact.getLastName()) << "|";
	std::cout << std::setw(10) << formatColumn(contact.getNickname()) << std::endl;
}

static void displayContactDetails(const Contact& contact)
{
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::searchContacts() const
{
	std::string	input;
	int			index;

	if (contactCount == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < contactCount; i++)
		displayContactRow(i, contacts[i]);
	std::cout << "Enter index: ";
	if (!std::getline(std::cin, input))
		return;
	if (input.length() != 1 || input[0] < '0' || input[0] > '7')
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	index = input[0] - '0';
	if (index >= contactCount)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	displayContactDetails(contacts[index]);
}
