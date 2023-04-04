#ifndef ANIMAL_H
#define ANIMAL_H

#include "Identifiable.h"
#include "defs.h"

class Customer;

class Animal : public Identifiable {
  friend ostream &operator<<(ostream &, Animal &);

public:
  Animal(SpeciesType, string, string, int, int);
  ~Animal();
  int getId();
  int getAnimalAge();
  string getName();
  string getParentName();
  virtual int getCompValue();
  void setParent(Customer *);
  virtual void print();

private:
  static int nextId;
  SpeciesType species;
  string name;
  string gender;
  int age;
  Customer *parent;
  string getSpecies(int);
};

#endif