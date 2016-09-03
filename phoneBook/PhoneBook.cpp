#include "PhoneBook.h"
#include <iostream>
#include <string>
using namespace std;
PhoneBook::PhoneBook(void)
{
	index=0;
}


PhoneBook::~PhoneBook(void)
{
}
void PhoneBook::addUser(string name_ ,string mail_ ,int num)
{
	name[index]=name_;
	mail[index]=mail_;
	number[index]=num;
	index++;
}
void PhoneBook::removeUserByName(string name_)
{
	int removedIndex =0; // wrong validation: if not found the user he will remove fisrt element each time
	
	// find the index of that name
	for (int i = 0; i < index; i++)
	{
		if (name[i]==name_)
		{ removedIndex=i; break;}
	}
	
	index--;

	// remove
	for (int i = removedIndex; i < index ; i++)
	{
		name[i]=name[i+1];
		mail[i]=mail[i+1];
		number[i]=number[i+1];
	}
}
