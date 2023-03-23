#ifndef ANIMAL_H
#define ANIMAL_H

class Customer;
#include "Identifiable.h"
#include "defs.h"

/*
Class  :  Animal
Purpose:  This is the Animal class which is used to make instance of the
Animal for the Clinic

Critical Functions:
 ~Animal(): It does point the pointer of the parent to the NULL and we does do
cleaning in IdArray Class

*/
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