#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer;

#include "IdList.h"
#include "Identifiable.h"
#include "defs.h"
#include "Animal.h"

class Customer : public Identifiable {

private:
  static int nextId;
  string name;
  IdList *pets;

public:
  Customer(string = "Customer");
  void addAnimal(Animal *);
  virtual int getCompValue();
  virtual void print();
  string getCustomerName();
};

#endif