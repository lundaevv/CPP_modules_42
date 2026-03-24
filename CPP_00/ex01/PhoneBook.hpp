#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		enum MessageKey
		{
			MSG_EMPTY_FIELD,
			MSG_EMPTY_PHONEBOOK,
			MSG_INVALID_INDEX,
			MSG_INVALID_COMMAND,
			PRMPT_NAME,
			PRMPT_SURNAME,
			PRMPT_NICKNAME,
			PRMPT_PHONE,
			PRMPT_SECRET,
			PRMPT_INDEX,
			PRMPT_COMMAND,
			CLMN_INDEX,
			CLMN_NAME,
			CLMN_SURNAME,
			CLMN_NICKNAME,
			SEPARATOR_WORD,
			SEPARATOR_COLUMN,
			CMD_ADD,
			CMD_SEARCH,
			CMD_EXIT
		};

		static const char* translate(MessageKey key);
		static const int	BOOK_SIZE = 8;
		static const int	COLUMN_WIDTH = 10;

		PhoneBook();
		bool addContact();
		void searchContacts() const;

	private:

		Contact	contacts[BOOK_SIZE];
		int		nextIndex;
		int		contactCount;
};

#endif