#include <iostream>
#include <string>
#include "PhoneBook.h"
using namespace std ;


void main ()
{
	PhoneBook trial;
	trial.addUser("Ahmed","ane@gmail.com",123);
	trial.addUser("mohamed","hello@gmail.com",12345);
	trial.addUser("mohamed2","hello@gmail.com",12345);
	trial.removeUserByName("mohamed");
}