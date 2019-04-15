#include "Faculty.h"

faculty::faculty(string a, string b, int c ,int d ,int e): person(a,b,c)
{
	coursecount = d;
	phoneNo = e;
	cout << "Faculty ()\n";
}
faculty::~faculty()
{
	cout << "~Faculty called\n";
}

int faculty::getNoOfcourses()
{
	return coursecount;
}

int faculty::getPhoneNo()
{
	return phoneNo;
}

void faculty::setNoOfcourses(int a)
{
	coursecount =a;
}

void faculty::setPhoneNo(int a)
{
	phoneNo = a;
}

void faculty::printFaculty()
{
	cout << "Faculty Member Name: " << getFirstname() << " " << getlastname()  << ",Age: " << age << ",No. of courses: " << coursecount << ",Ext. " << phoneNo << endl;
}