#pragma once

class Teacher:public Person
{
protected:
	string course;
	short int startTerm;

public:
	void set_person(string name, string lName)
	{
		firstName = name;
		lastName = lName;
		typOfPerson = 'T';
	}

	void set_course(string cours) { course = cours; }

	void set_ID(short int counter) { ID = counter + (startTerm * 1000); }

	void set_activatePerson(string UID) { tagUID = UID; };

	int get_teacherID(string fName, string lName, string cours, short int start)
	{
		if (fName == firstName && lName == lastName && course == cours && startTerm == start)
		{
			return ID;
		}
		else
			return -1;
	}


	string get_course(){ return course; }
	char get_typOfPerson() { return typOfPerson; }
	


};

