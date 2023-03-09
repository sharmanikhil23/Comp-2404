#ifndef PERSON_H
#define PERSON_H

using namespace std;

class Person
{
    private:
        string name;
        int age;

    public:
       
        Person(string="Person Name", int=3);
        ~Person();
        Person(Person&);
        void printSpecific(Person);
        void print();
        void print() const;
        void setName(string="Dilpreet Kaur Sawhney");

};

#endif