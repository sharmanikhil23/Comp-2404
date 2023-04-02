#ifndef CONTROL_H
#define CONTROL_H

#include "Animal.h"
#include "CompareAge.h"
#include "CompareDate.h"
#include "List.h"
#include "Schedule.h"
#include "View.h"

class Control {
public:
  Control();
  // ~Control();
  void launch();

private:
  View v;
  List<Animal *> animals;
  Schedule *sch;
  void initSchedule();
  void initAnimals();
  bool addAppt(int, int, int, int, int, int);
};

#endif
