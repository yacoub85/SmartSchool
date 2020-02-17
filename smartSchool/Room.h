#pragma once
#include<string>
using namespace std;

class Room
{

protected:
	string name;
	short int area;
	short int maxNumberOfPersons;
public:
	void set_nameOfRoom(string n) { name = n; }
	void set_area(){}
	void set_axNumberOfPersons(short int maxNumber) { maxNumberOfPersons = maxNumber; }


};

