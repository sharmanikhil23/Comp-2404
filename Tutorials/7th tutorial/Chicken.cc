#include <iostream>
using namespace std;
#include <string>

#include "Chicken.h"

Chicken::Chicken(string n, int a, float lf, int c)
    : Animal(n, a, lf), eggCount(c) {
  cout << "-- Chicken ctor " << getName() << endl;
}

Chicken::~Chicken() { cout << "-- Chicken dtor " << getName() << endl; }

void Chicken::print() const {

  cout << "Chicken:  " << Animal::getName() << ", age " << Animal::getAge()
       << ", with lifespan " << Animal::lifespan << ", eggs " << eggCount
       << endl;
}
