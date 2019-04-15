#include "Person.h"



person::person(string a ,string b,int no)
{
	firstname = a;
	lastname = b;
	age = no;
	cout << "Person ()\n";
}

person::~person()
{
	cout << "~Person() called\n";
}

string person::getFirstname()
{
	return firstname;
}

string person::getlastname()
{
	return lastname;
}

int person::getAGE()
{
	return age;
}

void person::setFirstname(string a)
{
	firstname = a;
}

void person::setLastname(string a)
{
	lastname = a;
}

void person::setAGE(int a)
{
	age = a;
}

void person::printInformation()
{
	cout << endl << firstname << " " << lastname << "is " << age << " years old";
}

