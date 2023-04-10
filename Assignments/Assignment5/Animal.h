#ifndef ANIMAL_H
#define ANIMAL_H

#include "Identifiable.h"
#include "defs.h"

class Customer;

/*
Class  :  Animal
Purpose:  This is the Animal class which is used to make instance of the
Animal for the Clinic and also store the pointer to the parent and this class in
Inherited from the Identifiable class

Critical Functions:
ostream &operator<<(ostream &, Animal &): So we are doing the operator
overloading to print the animal data but as we do not own the ostream class so
we are providing it friendship so it can access the data from the Animal class

*/

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