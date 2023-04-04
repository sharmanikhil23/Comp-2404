#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Animal.h"
#include "Customer.h"

int Animal::nextId = ANIMAL_IDS;

Animal::Animal(SpeciesType s, string n, string g, int y, int m)
    : Identifiable(nextId) {
  species = s;
  name = n;
  gender = g;
  age = (y * 12) + m;
  parent = NULL;
}

Animal::~Animal() {}

ostream &operator<<(ostream &output, Animal &a) {

  output << left << setfill(' ') << a.id << " : " << setw(10) << a.name << " : "
         << setw(7) << a.getSpecies(a.species) << " : " << right << setw(2)
         << (a.age / 12) << " yrs, " << (a.age % 12) << " mths: Parent " << left
         << a.getParentName() << endl;
  return output;
}

string Animal::getSpecies(int i) {
  if (i == 0) {
    return "DOG";
  } else if (i == 1) {
    return "CAT";
  } else {
    return "OTHER";
  }
}

int Animal::getId() { return Identifiable::getId(); }
int Animal::getAnimalAge() { return age; }
string Animal::getName() { return name; }

string Animal::getParentName() {
  if (parent == NULL) {
    return "NONE";
  } else {
    return parent->getCustomerName();
  }
}

void Animal::setParent(Customer *c) { parent = c; }

void Animal::print() { cout << *this; }
int Animal::getCompValue() { return age; }