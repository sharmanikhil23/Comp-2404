#ifndef ANIMAL_H
#define ANIMAL_H

class Animal;

#include "Identifiable.h"
#include "defs.h"
#include "Customer.h"

class Animal : public Identifiable {
private:
  static int nextId;
  SpeciesType species;
  string name;
  string gender;
  int age;
  Customer *parent;

public:
  void setParent(Customer *);
  virtual int getCompValue();
  virtual void print();
  Animal(SpeciesType, string n, string g, int y, int m);
};

#endif