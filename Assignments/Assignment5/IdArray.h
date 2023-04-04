#ifndef IDARRAY_H
#define IDARRAY_H

#include "Collection.h"
#include "Customer.h"
#include "Identifiable.h"
#include "defs.h"

/*
Class  :  IdArray
Purpose:  This is important class for Clinic as it does store all the CLients in
the Array

Critical Functions:
~IdArray(): It will only deallocate the nodes which stores the animals for the
customer but not the data
*/

class IdArray : public Collection {

public:
  IdArray(bool = true, int = MAX_ARR);
  virtual ~IdArray();
  virtual bool add(Identifiable *);
  virtual bool find(int, Identifiable **);
  virtual void print();

private:
  int capacity;
  Identifiable **data;
  int size;
};
#endif
