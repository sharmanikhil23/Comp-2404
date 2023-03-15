#ifndef PIG_H
#define PIG_H

#include "Animal.h"

class Pig : public Animal {

public:
  Pig(string n, int a, float lf, int p);
  void print() const;

private:
  int pen;
};

#endif