#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;


    Student::Student(){
            number="00000";
            name="Hey You!!";
    }

    Student::Student(string s1, string s2){
        number=s1;
        name=s2;
    }

    string Student::getName(){
        return name;
    }

    void Student::setName(string n){
        name=n;
    }

    void Student::print(){
        cout<<"Student:  "<<number<<"  "<<name<<endl;
    }