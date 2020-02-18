#pragma once
#include<string>
using namespace std;

class Person
{
protected:
	string firstName;
	string lastName;
	char typOfPerson;
	short int ID;
	string tagUID;
	
public:
	virtual void set_person(string name,string lName) = 0;
	virtual void set_ID(short int id) = 0;

	virtual void set_UID(string UID) { tagUID = UID; };
	virtual void set_activatePerson(string UID) { tagUID = UID; };

	
	virtual char get_typOfPerson() { return typOfPerson; }
	virtual string get_firstName() { return firstName; }
	virtual string get_lastName() { return lastName; }
	
	virtual short int get_ID() { return ID; }
	virtual string get_tagUID() { return tagUID; }

	virtual void print_person(short int id) {};
	virtual void printOut_personDetails(short int id) {};

	

	


};

