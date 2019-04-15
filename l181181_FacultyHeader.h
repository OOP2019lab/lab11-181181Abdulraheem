#pragma once
#include "Person.h"


class faculty:private person
{
	int coursecount;
	int phoneNo;

public:
	faculty(string Fname,string Lname,int Age,int Coursecount,int phone);
	~faculty();
	int getNoOfcourses();
	int getPhoneNo();
	void setNoOfcourses(int );
	void setPhoneNo(int);
	void printFaculty();
};