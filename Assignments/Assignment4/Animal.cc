#include <iostream>
using namespace std;
#include <string>

#include "Animal.h"

int Animal::nextId = ANIMAL_IDS;

Animal::Animal(SpeciesType t, string n, string g, int y, int m)
    : Identifiable(nextId) {
  species = t;
  name = n;
  gender = g;
  age = y * 12 + m;
  parent = NULL;
  nextId++;
}

int Animal::getCompValue() { return age; }

void Animal::print() {
  cout << "Printing the detailed animal information from animal class" << endl;
}

void Animal::setParent(Customer *c) { parent = c; }