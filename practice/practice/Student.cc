#include <iostream>
using namespace std;

#include "Student.h"

int Student::getSNumber=1000;

Student::Student(string n,int a)
: number(getSNumber), p(n,a){
    cout<<"Student Constructor called"<<endl;
    getSNumber++;
}

int Student::getStudentNumber(){
    return getSNumber;
}

void Student::print(){
    p.print();
}

void Student::print() const{
    p.print();
}