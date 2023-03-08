#ifndef FARM_H
#define FARM_H

#include "List.h"

class Farm {
public:
  static int nextId;
  int id;
  void add(Animal *a);
  void print();
  Farm();
  ~Farm();
  static int getNextId();

private:
  List data;
};

#endif