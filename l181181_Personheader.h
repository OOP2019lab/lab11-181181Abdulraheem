#pragma once
#include <iostream>
#include <string>
using namespace std;

class person
{
	string firstname;
	string lastname;

protected:
	int age;

public:

	person(string,string,int);
	~person();
	string getFirstname();
	string getlastname();
	int getAGE();
	void setFirstname(string);
	void setLastname(string);
	void setAGE(int);
	void printInformation();
};