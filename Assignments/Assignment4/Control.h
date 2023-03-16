#ifndef CONTROL_H
#define CONTROL_H

#include "Clinic.h"
#include "View.h"

class Control {
public:
  Control();
  ~Control();
  void launch();

private:
  Clinic *c;
  void initCustomers(Clinic *);
  void initAnimals(Clinic *);
  View *v;
};

#endif
