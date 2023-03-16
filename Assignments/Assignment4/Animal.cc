#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Animal.h"

int Animal::nextId = ANIMAL_IDS;

Animal::Animal(SpeciesType t, string n, string g, int y, int m)
    : Identifiable(nextId) {
  species = t;
  name = n;
  gender = g;
  age = y * 12 + m;
  parent = NULL;
}

int Animal::getCompValue() { return age; }

void Animal::print() {

  cout << left << Identifiable::getId() << " : " << setw(10) << name << " : "
       << setw(10) << species << " : " << setw(3) << (age / 12) << " yrs, "
       << (age % 12) << " mths: Parent " << getCustomerName() << endl;
}

string Animal::getCustomerName() {
  if (parent == NULL) {
    return "NONE";
  } else {
    return parent->getCustomerName();
  }
}

void Animal::setParent(Customer *c) { parent = c; }

int Animal::getId() { return Identifiable::getId(); }