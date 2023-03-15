#include <iostream>
using namespace std;
#include <string>

#include "Pig.h"

Pig::Pig(string n, int a, float lf, int p) : Animal(n, a, lf), pen(p) {
  cout << "Pig constructor" << endl;
}

void Pig::print() const {
  cout << "Pig:  " << Animal::getName() << ", age " << Animal::getAge()
       << ", with lifespan " << Animal::lifespan << ", Pen " << pen << endl;
}