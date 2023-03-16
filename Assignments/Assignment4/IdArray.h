#ifndef IDARRAY_H
#define IDARRAY_H

#include "Collection.h"
#include "Identifiable.h"
#include "defs.h"

class IdArray : public Collection {

public:
  IdArray(int = MAX_ARR, bool = true);
  virtual ~IdArray();
  virtual bool add(Identifiable *);
  virtual bool find(int, Identifiable **);
  virtual void print();

private:
  int maxSize;
  Identifiable **data;
  int size;
};
#endif