#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Animal.h"
#include "IdList.h"
#include "Identifiable.h"
#include "defs.h"

/*
Class  :  Customer
Purpose:  This is the Customer class which is inheriting Identifiable class as
the base class this class will help to make instance of the Customer by the
Clinic and also have the instance of the IdList class which will store all the
animals in it
*/
class Customer : public Identifiable {

private:
  static int nextId;
  string name;
  IdList pets;

public:
  Customer(string = "Customer");
  ~Customer();
  void addAnimal(Animal *);
  virtual int getCompValue();
  virtual void print();
  string getCustomerName();
};

#endif