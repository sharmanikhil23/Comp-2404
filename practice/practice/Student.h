#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

#include "Person.h"
#include "Student.h"

class Student
{
    private:
        const int number;
        static int getSNumber;
        Person p;

    public:
        Student(string,int);
        static int getStudentNumber();
        void print();
        void print() const;


};

#endif
