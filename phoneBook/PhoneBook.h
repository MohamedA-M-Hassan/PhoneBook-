#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
using namespace std;
class PhoneBook
{
private:
	string name[100];
	string mail[100];
	int number[100];
	int index;

public:
	PhoneBook(void);
	~PhoneBook(void);

	
	void addUser(string name_ ,string mail_ ,int num);
	void removeUserByName(string name_);
	void removeWithValidationIfUserNotFound(string name_);
	int getUserIdByName (string name_);
	void updateByName(string oldName , string newName ,string newMail,int newNum);
	void checkMail(string mail_);
};
#endif
