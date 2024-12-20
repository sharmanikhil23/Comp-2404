#include <iostream>
using namespace std;
#include <string>

#include "Animal.h"

Animal::Animal(string n, int a, float lf) : name(n), age(a), lifespan(lf) {
  cout << "-- Animal ctor: " << name << endl;
}

Animal::~Animal() { cout << "-- Animal dtor: " << name << endl; }

string Animal::getName() const { return name; }

void Animal::print() const {
  cout << "Animal:  " << name << ", age " << age << ", with lifespan is "
       << lifespan << endl;
}

int Animal::getAge() const { return age; }
