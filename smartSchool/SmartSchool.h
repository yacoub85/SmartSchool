#pragma once
#include "Room.h"
#include "Person.h"
#include "Equipment.h"
#include<vector>
using namespace std;

class SmartSchool
{
protected:
	vector<Person*>person;
	vector<Room*>room;
	vector<Equipment*>equipment;

	static short int studentCounter;
	static short int adminCounter;
	static short int teacherCounter;
	static short int personCounter;


public:
	SmartSchool() { studentCounter = 0; adminCounter = 0; teacherCounter = 0; };

	void add_personToList(Person* per)
	{
		person.push_back(per);

		if (per->get_typOfPerson()=='S')
		{
			studentCounter++;
			per->set_ID(studentCounter);
		}
		if (per->get_typOfPerson() == 'T')
		{
			teacherCounter++;
		}
		if (per->get_typOfPerson() == 'A')
		{
			adminCounter++;
		}

		personCounter++;
	}

	short int get_studentCounter() { return studentCounter; }



};


