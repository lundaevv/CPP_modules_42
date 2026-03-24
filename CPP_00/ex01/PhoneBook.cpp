#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() : nextIndex(0), contactCount(0)
{
}

const char* PhoneBook::translate(MessageKey key)
{
	switch (key)
	{
		case MSG_EMPTY_FIELD:
			return "Field cannot be empty.";
		case MSG_EMPTY_PHONEBOOK:
			return "PhoneBook is empty.";
		case MSG_INVALID_INDEX:
			return "Invalid index.";
		case MSG_INVALID_COMMAND:
			return "Invalid command.";
		case PRMPT_NAME:
			return "First name: ";
		case PRMPT_SURNAME:
			return "Last name: ";
		case PRMPT_NICKNAME:
			return "Nickname: ";
		case PRMPT_PHONE:
			return "Phone number: ";
		case PRMPT_SECRET:
			return "Darkest secret: ";
		case PRMPT_INDEX:
			return "Enter index: ";
		case PRMPT_COMMAND:
			return "Enter command (ADD, SEARCH, EXIT): ";
		case CLMN_INDEX:
			return "Index";
		case CLMN_NAME:
			return "First name";
		case CLMN_SURNAME:
			return "Last name";
		case CLMN_NICKNAME:
			return "Nickname";
		case SEPARATOR_WORD:
			return ".";
		case SEPARATOR_COLUMN:
			return "|";
		case CMD_ADD:
			return "ADD";
		case CMD_SEARCH:
			return "SEARCH";
		case CMD_EXIT:
			return "EXIT";
	}
	return "";
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
		std::cout << PhoneBook::translate(PhoneBook::MSG_EMPTY_FIELD) << std::endl;
	}
}

static std::string formatColumn(const std::string& str)
{
	if (str.length() > PhoneBook::COLUMN_WIDTH)
		return str.substr(0, PhoneBook::COLUMN_WIDTH - 1) + PhoneBook::translate(PhoneBook::SEPARATOR_WORD);
	return str;
}

bool PhoneBook::addContact()
{
	Contact		newContact;
	std::string	input;

	if (!getInput(PhoneBook::translate(PhoneBook::PRMPT_NAME), input))
		return false;
	newContact.setFirstName(input);
	if (!getInput(PhoneBook::translate(PhoneBook::PRMPT_SURNAME), input))
		return false;
	newContact.setLastName(input);
	if (!getInput(PhoneBook::translate(PhoneBook::PRMPT_NICKNAME), input))
		return false;
	newContact.setNickname(input);
	if (!getInput(PhoneBook::translate(PhoneBook::PRMPT_PHONE), input))
		return false;
	newContact.setPhoneNumber(input);
	if (!getInput(PhoneBook::translate(PhoneBook::PRMPT_SECRET), input))
		return false;
	newContact.setDarkestSecret(input);
	contacts[nextIndex] = newContact;
	nextIndex = (nextIndex + 1) % BOOK_SIZE;
	if (contactCount < BOOK_SIZE)
		contactCount++;
	return true;
}

static void displayContactRow(int index, const Contact& contact)
{
	std::cout << std::setw(PhoneBook::COLUMN_WIDTH) << index << PhoneBook::translate(PhoneBook::SEPARATOR_COLUMN);
	std::cout << std::setw(PhoneBook::COLUMN_WIDTH) << formatColumn(contact.getFirstName()) << PhoneBook::translate(PhoneBook::SEPARATOR_COLUMN);
	std::cout << std::setw(PhoneBook::COLUMN_WIDTH) << formatColumn(contact.getLastName()) << PhoneBook::translate(PhoneBook::SEPARATOR_COLUMN);
	std::cout << std::setw(PhoneBook::COLUMN_WIDTH) << formatColumn(contact.getNickname()) << std::endl;
}

static void displayContactDetails(const Contact& contact)
{
	std::cout << PhoneBook::translate(PhoneBook::PRMPT_NAME) << contact.getFirstName() << std::endl;
	std::cout << PhoneBook::translate(PhoneBook::PRMPT_SURNAME) << contact.getLastName() << std::endl;
	std::cout << PhoneBook::translate(PhoneBook::PRMPT_NICKNAME) << contact.getNickname() << std::endl;
	std::cout << PhoneBook::translate(PhoneBook::PRMPT_PHONE) << contact.getPhoneNumber() << std::endl;
	std::cout << PhoneBook::translate(PhoneBook::PRMPT_SECRET) << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::searchContacts() const
{
	std::string	input;
	int			index;

	if (contactCount == 0)
	{
		std::cout << PhoneBook::translate(PhoneBook::MSG_EMPTY_PHONEBOOK) << std::endl;
		return;
	}
	std::cout << std::setw(COLUMN_WIDTH) << PhoneBook::translate(PhoneBook::CLMN_INDEX) << PhoneBook::translate(PhoneBook::SEPARATOR_COLUMN);
	std::cout << std::setw(COLUMN_WIDTH) << PhoneBook::translate(PhoneBook::CLMN_NAME) << PhoneBook::translate(PhoneBook::SEPARATOR_COLUMN);
	std::cout << std::setw(COLUMN_WIDTH) << PhoneBook::translate(PhoneBook::CLMN_SURNAME) << PhoneBook::translate(PhoneBook::SEPARATOR_COLUMN);
	std::cout << std::setw(COLUMN_WIDTH) << PhoneBook::translate(PhoneBook::CLMN_NICKNAME) << std::endl;
	for (int i = 0; i < contactCount; i++)
		displayContactRow(i + 1, contacts[i]);
	std::cout << PhoneBook::translate(PhoneBook::PRMPT_INDEX);
	if (!std::getline(std::cin, input))
		return;
	if (input.length() != 1 || input[0] < '1' || input[0] > '0' + contactCount)
	{
		std::cout << PhoneBook::translate(PhoneBook::MSG_INVALID_INDEX) << std::endl;
		return;
	}
	index = input[0] - '1';
	displayContactDetails(contacts[index]);
}
