#ifndef CLINIC_H
#define CLINIC_H

#include "Animal.h"
#include "Customer.h"
#include "IdArray.h"
#include "IdList.h"

class Clinic {

private:
  string name;
  IdList *animals;
  IdArray *customers;

public:
  Clinic(string = " Clinic name");
  ~Clinic();
  void add(Customer *);
  void add(Animal *);
  bool addToCustomer(Customer *, int);
  void print();
  void printCustomers();
  void printAnimals();
};

#endif