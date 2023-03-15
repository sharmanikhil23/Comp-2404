#ifndef AGCOOP_H
#define AGCOOP_H

#include "Animal.h"
#include "List.h"

class AgCoop {
public:
  AgCoop();
  void add(Animal *a);
  void print() const;

private:
  List list;
};

#endif
