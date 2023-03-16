#ifndef COLLECTION_H
#define COLLECTION_H

#include "Identifiable.h"

class Collection {

protected:
  bool asc; // true for asc else desc

public:
  Collection(bool a);
  virtual ~Collection();
  virtual bool add(Identifiable *) = 0;
  virtual bool find(int, Identifiable **) = 0;
  virtual void print() = 0;
  void setAsc(bool);
};

#endif