#ifndef COW_H
#define COW_H

#include "Animal.h"

class Cow : public Animal {

public:
  Cow(string n, int a, float lf, string milk);
  void print() const;

private:
  string milkingTime;
};
#endif