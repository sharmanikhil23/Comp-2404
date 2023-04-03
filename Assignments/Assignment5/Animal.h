#ifndef ANIMAL_H
#define ANIMAL_H

#include "defs.h"

class Animal {
  friend ostream &operator<<(ostream &, Animal &);

public:
  Animal(SpeciesType, string, string, int, int, string);
  ~Animal();
  int getId();
  int getAnimalAge();
  string getName();
  string getParentName();

private:
  static int nextId;
  int id;
  SpeciesType species;
  string name;
  string gender;
  int age;
  string parent;
  static string getSpecies(int);
};

#endif