#pragma once
#include "Person.h"

class Student :public Person
{
protected:
	
	string studentStatus;
	string program;

	short int registrationYear;

public:
	void set_person(string name, string lName)
	{
		firstName = name;
		lastName = lName;
		typOfPerson = 'S';	
	}

	void set_RegistrationYearAndProgram (string pro, short int year)
	{
		program = pro;
		registrationYear = year;
	}
	
	void set_ID(short int counter) { ID = counter + (registrationYear * 1000); }


	int get_stdentID(string fName, string lName, string pro, short int year)
	{
		if (fName == firstName && lName == lastName && pro == program && year == registrationYear)
		{
			return ID;
		}
		else
			return -1;
	}
	
	char get_typOfPerson() { return typOfPerson; }

	
};

