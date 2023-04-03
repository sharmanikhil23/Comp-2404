#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Animal.h"

int Animal::nextId = ANIMAL_IDS;

Animal::Animal(SpeciesType s, string n, string g, int y, int m, string p) {
  species = s;
  name = n;
  gender = g;
  age = (y * 12) + m;
  parent = p;
  id = nextId++;
}

Animal::~Animal() {}

ostream &operator<<(ostream &output, Animal &a) {

  output << left << a.id << " : " << setw(10) << a.name << " : " << setw(7)
         << Animal::getSpecies(a.species) << " : " << right << setw(2)
         << (a.age / 12) << " yrs, " << (a.age % 12) << " mths: Parent " << left
         << a.parent << endl;
  return output;
}

string Animal::getSpecies(int i) {
  if (i == 0) {
    return "Dog";
  } else if (i == 1) {
    return "Cat";
  } else {
    return "Other";
  }
}

int Animal::getId() { return id; }
int Animal::getAnimalAge() { return age; }
string Animal::getName() { return name; }
string Animal::getParentName() { return parent; }