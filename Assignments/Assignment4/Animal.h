#ifndef ANIMAL_H
#define ANIMAL_H

class Animal;

#include "Customer.h"
#include "Identifiable.h"
#include "defs.h"

class Animal : public Identifiable {
private:
  static int nextId;
  SpeciesType species;
  string name;
  string gender;
  int age;
  Customer *parent;
  string getCustomerName();

public:
  void setParent(Customer *);
  virtual int getCompValue();
  int getId();
  virtual void print();
  Animal(SpeciesType, string n, string g, int y, int m);
  ~Animal();
};

#endif