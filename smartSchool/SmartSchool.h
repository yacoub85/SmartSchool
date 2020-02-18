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
		per->set_UID("NULL");
		person.push_back(per);

		if (per->get_typOfPerson()=='S')
		{
			studentCounter++;
			per->set_ID(studentCounter);
		}
		if (per->get_typOfPerson() == 'T')
		{
			teacherCounter++;
			per->set_ID(teacherCounter);
		}
		if (per->get_typOfPerson() == 'A')
		{
			adminCounter++;
			per->set_ID(adminCounter);
		}

		personCounter++;
	}

	//search function py ID
	Person* currentPerson;
	short int findByPersonsID(short int id)
	{
		//break the searching if vector is empty
		if (person.size() == 0) { return -1; }

		for (int i = 0; i < person.size(); i++)
		{

			if (id == person[i]->get_ID())
			{
				currentPerson = person[i];
				cout << currentPerson->get_firstName() << " " << currentPerson->get_lastName() << " " << currentPerson->get_ID()
					<< " " << currentPerson->get_typOfPerson() << " " << currentPerson->get_tagUID() << endl;
				return i;
				break;
			}
			if (i == person.size() - 1)
			{
				cout << "\n\n\t\t\t\t\t\tCan't Find!\n";
				return i = -1;

				break;
			}

		}
		
	}

	bool registerTag(short int id ,string tagID)
	{
		short int index = -1;
		index = findByPersonsID(id);
		if (index >= 0)
		{
			person[index]->set_UID(tagID);
			return true;
		}
		else
		{
			return false;
		}
		
	}

	short int get_studentCounter() { return studentCounter; }



};


