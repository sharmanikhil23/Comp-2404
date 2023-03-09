#include <iostream>
using namespace std;

#include "Person.h"

Person::Person(string n, int a){
    name=n;
    age=a;
    cout<<" Person Ctor Called"<<endl;
}

Person::Person(Person &s){
    cout<<"Copy Constructor called"<<endl;
    name=s.name;
    age=s.age;
}

Person::~Person(){
    cout<<"destructure called"<<endl;
}

void Person::printSpecific(Person s){
    s.print();
}
void Person::print(){
    cout<<"Person Name:: "<<name<<" age:: "<< age <<endl;
}


void Person::print() const {
    cout<<"Person Name:: "<<name<<" age:: "<< age <<endl;
}
void Person::setName(string n){
    name=n;
}