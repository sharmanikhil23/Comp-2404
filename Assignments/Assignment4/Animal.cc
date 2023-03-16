#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Animal.h"
#include "Customer.h"

int Animal::nextId = ANIMAL_IDS;

Animal::Animal(SpeciesType t, string n, string g, int y, int m)
    : Identifiable(nextId) {
  species = t;
  name = n;
  gender = g;
  age = y * 12 + m;
  parent = NULL;
}

Animal::~Animal() { parent = NULL; }

int Animal::getCompValue() { return age; }

void Animal::print() {

  cout << left << Identifiable::getId() << " : " << setw(10) << name << " : "
       << setw(7) << getSpecies(species) << " : " << right << setw(2)
       << (age / 12) << " yrs, " << (age % 12) << " mths: Parent " << left
       << getCustomerName() << endl;
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

string Animal::getSpecies(int i) {
  if (i == 0) {
    return "Dog";
  } else if (i == 1) {
    return "Cat";
  } else {
    return "Other";
  }
}