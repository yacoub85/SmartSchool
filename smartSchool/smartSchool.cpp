#include <iostream>
#include "SmartSchool.h"
#include "Room.h"
#include "Person.h"
#include "Equipment.h"
#include "Student.h"
#include "Teacher.h"


short int SmartSchool::adminCounter;
short int SmartSchool::teacherCounter;
short int SmartSchool::studentCounter;
short int SmartSchool::personCounter;




int main()
{

    SmartSchool* STI=new SmartSchool;
    Student* newStudent;
    Teacher* newTeacher;

    newStudent = new Student;
    newStudent->set_person("Jimmy", "Hasselberg");
    newStudent->set_RegistrationYearAndProgram("IOT", 19);
    STI->add_personToList(newStudent);
    cout << "First Student " << newStudent->get_ID() << endl;
    cout << "studend counter " << STI->get_studentCounter() << endl;

   
    newStudent = new Student;
    newStudent->set_person("Yacoub", "Gerges");
    newStudent->set_RegistrationYearAndProgram("IOT", 19);
    STI->add_personToList(newStudent);
    cout << "second Student " << newStudent->get_ID() << endl;
    cout << "studend counter " << STI->get_studentCounter() << endl;

    if ((STI->registerTag(19001, "00:12:34:56:f1")) == true)
    {
        cout << "OK!" << endl;
        cout << "TAG Number:" << newStudent->get_tagUID() << endl;
    }
    else
        cout << "Not allowed!" << endl;

    

    STI->findByPersonsID(19001);
    STI->findByPersonsID(19002);

    STI->findByPersonsID(19003);

    if ((STI->registerTag(19003, "01:11:33:f6:d1")) == true)
    {
        cout << "OK!" << endl;
        cout << "TAG Number:" << newStudent->get_tagUID() << endl;
    }
    else
        cout << "Not allowed!" << endl;

    
    
    
}

