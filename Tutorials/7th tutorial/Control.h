#ifndef CONTROL_H
#define CONTROL_H

#include "AgCoop.h"
#include "Chicken.h"
#include "Cow.h"
#include "Pig.h"

class Control {
public:
  Control();
  void initAnimal();
  void launch();

private:
  void print() const;
  AgCoop ag;
};

#endif
