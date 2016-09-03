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