#ifndef CONTROL_H
#define CONTROL_H

#include "Animal.h"
#include "Clinic.h"
#include "List.h"
#include "View.h"

/*
Class  :  Control
Purpose:  This is the Control class of the program, It does have the instance of
both the View Class as well as Clinic Class. This class does deal with
initilizing the data for both customers as well as animals

*/
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
