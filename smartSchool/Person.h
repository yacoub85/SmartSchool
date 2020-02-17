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
	
public:
	virtual void set_person(string name,string lName) = 0;
	virtual void set_ID(short int id) = 0;

	virtual char get_TypeOfPerson() { return typOfPerson; }
	virtual string get_firstName() { return firstName; }
	virtual string get_lastName() { return lastName; }
	virtual char get_typOfPerson() {return typOfPerson; }
	virtual short int get_ID() { return ID; }

	virtual void print_person(short int id) {};
	virtual void printOut_personDetails(short int id) {};
	


};

