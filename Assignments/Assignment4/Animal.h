#ifndef ANIMAL_H
#define ANIMAL_H

class Customer;
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
  string getSpecies(int);

public:
  void setParent(Customer *);
  virtual int getCompValue();
  int getId();
  virtual void print();
  Animal(SpeciesType, string n, string g, int y, int m);
  ~Animal();
};

#endif