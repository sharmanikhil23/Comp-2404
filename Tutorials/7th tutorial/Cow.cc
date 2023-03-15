#include <iostream>
using namespace std;
#include <string>

#include "Cow.h"

Cow::Cow(string n, int a, float lf, string milk)
    : Animal(n, a, lf), milkingTime(milk) {
  cout << "Cow constructor" << endl;
}

void Cow::print() const {
  cout << "Cow:  " << Animal::getName() << ", age " << Animal::getAge()
       << ", with lifespan " << Animal::lifespan << ", Milking time "
       << milkingTime << endl;
}