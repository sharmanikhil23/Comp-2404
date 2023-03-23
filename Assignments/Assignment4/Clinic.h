#ifndef CLINIC_H
#define CLINIC_H

#include "Animal.h"
#include "Customer.h"
#include "IdArray.h"
#include "IdList.h"

/*
Class  :  Clinic
Purpose:  This is main class which will be used to take care of all the animals
as well as customers too

*/

class Clinic {

private:
  string name;
  IdList *animals;
  IdArray *customers;

public:
  Clinic(string = "CARLETON ANIMAL HOSPITAL");
  ~Clinic();
  void add(Customer *);
  void add(Animal *);
  bool addToCustomer(Customer *, int);
  void print();
  void printCustomers();
  void printAnimals();
};

#endif