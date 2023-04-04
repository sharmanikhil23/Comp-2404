#ifndef CLINIC_H
#define CLINIC_H

#include "Animal.h"
#include "Collection.h"
#include "CompareAge.h"
#include "CompareDate.h"
#include "Customer.h"
#include "IdArray.h"
#include "Identifiable.h"
#include "List.h"
#include "Schedule.h"

/*
Class  :  Clinic
Purpose:  This is main class which will be used to take care of all the animals
as well as customers too

*/

class Clinic {

private:
  string name;
  List<Animal *> animals;
  Schedule *sch;
  IdArray *customers;

public:
  Clinic(string = "CARLETON ANIMAL HOSPITAL");
  ~Clinic();
  void add(Customer *);
  void add(Animal *);
  bool addAppt(int, int, int, int, int, int);
  bool addToCustomer(Customer *, int);
  void print();
  void printCustomers();
  void printAnimals();
  void printSchedule();
};

#endif