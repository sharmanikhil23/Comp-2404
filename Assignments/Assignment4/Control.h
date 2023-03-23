#ifndef CONTROL_H
#define CONTROL_H

#include "Clinic.h"
#include "View.h"

/*
Class  :  Control
Purpose:  This is the Control class which does control complete program as first
of all it initiate Clinic class then it will initilize the data for Clinic and
keep control on what user want to do

*/

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
