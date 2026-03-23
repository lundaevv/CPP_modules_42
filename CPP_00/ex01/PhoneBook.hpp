#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		nextIndex;
		int		contactCount;
	
	public:
		PhoneBook();

		bool addContact();
		void searchContacts() const;
};

#endif