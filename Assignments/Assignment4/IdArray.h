#ifndef IDARRAY_H
#define IDARRAY_H

#include "Collection.h"
#include "Identifiable.h"
#include "defs.h"

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
