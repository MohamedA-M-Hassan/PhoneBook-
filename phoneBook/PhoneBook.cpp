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
// this function will crash if the user not found in case removedIndex =-1
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
void PhoneBook::removeWithValidationIfUserNotFound(string name_)
{
	int removedIndex =-1;
	// find the index of that name
	for (int i = 0; i < index; i++)
	{
		if (name[i]==name_)
		{ removedIndex=i; break;}
	}
	if (removedIndex==-1)
	{
		cout<<"not found"<<endl ;
	}
	else
	{
		index--;

		// remove
		for (int i = removedIndex; i < index ; i++)
		{
			name[i]=name[i+1];
			mail[i]=mail[i+1];
			number[i]=number[i+1];
		}
	}
	
}
int PhoneBook::getUserIdByName(string name_) /* fisrt it was return boolean> 
										then if u use it in update for example
										u will need to make another loop to get the index 
										:so make them in only one loop */
{
	int index_ =-1;  
	//bool flag=false;
	for (int i = 0; i < index; i++)
	{
		if (name[i]==name_) 
		{
			//flag = true;
			//break;
			//return true;
			index_=i;
			break;
		}
	}
	// return flag;
	//return false;
	return index_; // if -1 > not found || else > found
}
void PhoneBook::updateByName(string oldName, string newName ,string newMail,int newNum)
{
	// this will crash
	/*if(getUserIdByName(oldName) != -1 )
	{
		name[getUserIdByName(oldName)]= newName;
		mail[getUserIdByName(oldName)]= newMail;
		number[getUserIdByName(oldName)]= newNum;
	}*/
	int indx= getUserIdByName(oldName);
	if(indx != -1 )
	{
		name[indx]= newName;
		mail[indx]= newMail;
		number[indx]= newNum;
	}
	else cout << "this user does't exist"<<endl;
}
bool PhoneBook::checkMail(string mail_)
{
	
	
		if (mail_ == "")
		{
			return false;
		}
		int atPos = -1;
		int dotPos = -1;
		for (int i = 0; i < mail_.length(); i++)
		{
			if (mail_[i] == '@')
			{
				atPos = i;
			}
			else if (mail_[i] == '.')
			{
				dotPos = i;
			}
		}
		if (atPos == -1 || dotPos == -1)
		{
			return false;
		}
		if (atPos < 1 || dotPos < atPos + 2 || dotPos == mail_.length() - 1)
		{
			return false;
		}
		else
		{
			return true;
		}
		
}

