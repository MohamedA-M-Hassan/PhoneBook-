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
	int x=trial.userFound("moh");
	//trial.removeUserByName("mohamed");
	//trial.removeUserByName("mo"); // wrong test case: as fisrt element will be removed 
	trial.removeWithValidationIfUserNotFound("mo");
	trial.updateByName ("Ahmed","Ahmed2","ahmed@gmail.com",147);
	trial.updateByName ("hello","Ahmed3","ahmed@gmail.com",0147);
}