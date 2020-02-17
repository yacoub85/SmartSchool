#include <iostream>
#include "SmartSchool.h"
#include "Room.h"
#include "Person.h"
#include "Equipment.h"
#include "Student.h"


short int SmartSchool::adminCounter;
short int SmartSchool::teacherCounter;
short int SmartSchool::studentCounter;
short int SmartSchool::personCounter;




int main()
{

    SmartSchool* STI=new SmartSchool;
    Student* newStudent;

    newStudent = new Student;
    newStudent->set_person("Jimmy", "Hasselberg");
    newStudent->set_RegistrationYearAndProgram("IOT", 19);
    STI->add_personToList(newStudent);
    cout << "First Student " << newStudent->get_ID() << endl;
    cout << STI->get_studentCounter() << endl;

   
    newStudent = new Student;
    newStudent->set_person("Yacoub", "Gerges");
    newStudent->set_RegistrationYearAndProgram("IOT", 19);
    STI->add_personToList(newStudent);
    cout << "First Student " << newStudent->get_ID() << endl;
    cout << STI->get_studentCounter() << endl;
    

    
    
    
}

