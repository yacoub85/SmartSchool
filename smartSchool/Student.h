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

	void set_activatePerson(string UID) { tagUID = UID; };



	string get_firstName() { return firstName; }
	string get_lastName() { return lastName; }

	char get_typOfPerson() { return typOfPerson; }

	int get_stdentID(string fName, string lName, string pro, short int year)
	{
		if (fName == firstName && lName == lastName && pro == program && year == registrationYear)
		{
			return ID;
		}
		else
			return -1;
	}

	string get_tagUID() { return tagUID; }
	
	

	
};

