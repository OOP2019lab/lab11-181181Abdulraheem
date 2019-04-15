#include "Student.h"


student::student(string a,string b,int c,float gpa): person(a,b,c) , gpa(gpa)
{
	cout << "Student ()\n";
}

float student::getGPA()
{
	return gpa;
}

void student::setGPA(float gg)
{
	gpa = gg;
}

void student:: printStudent()
{
	cout << getFirstname() << " " << getlastname()
     << "is  " << age <<" years old, his cgpa is " << gpa << endl;
}


student::~student()
{
	cout << "~student called\n";
}