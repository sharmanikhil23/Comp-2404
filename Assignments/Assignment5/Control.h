#ifndef CONTROL_H
#define CONTROL_H

#include "Animal.h"
#include "Clinic.h"
#include "List.h"
#include "View.h"

class Control {
public:
  Control();
  ~Control();
  void launch();

private:
  View v;
  Clinic *c;
  void initSchedule();
  void initAnimals();
  void initCustomers(Clinic *);
};

#endif
