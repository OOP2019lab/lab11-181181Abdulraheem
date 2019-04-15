#include "Person.h"
#include "Faculty.h"
#include "Student.h"

int main()
{
	//student take arguments like (Firstname,Lastname,Age,Gpa)
	//Faculty take arguments like (Firstname,LAstname,Age,No of courses,phone_no)
	student s("Ted","Thompson",22,3.91);
	faculty f("Richard","Karp",45,2,420);
		 //here the number of courses is 2
		 //and the extension number is 420

	/* 
	Answer for Exs 5
	Person ()
	Student ()
	Person ()
	Faculty ()
	~Faculty called
	~Person() called
	~student called
	~Person() called*/

	/*s.printStudent();
	f.printFaculty();*/

	return 0;
}