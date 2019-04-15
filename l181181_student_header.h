#pragma once
#include "Person.h"


class student:private person
{
	float gpa;

public:

	student(string Fname,string Lname,int Age,float gpa);
	~student();
	float getGPA();
	void setGPA(float);
	void printStudent();
};