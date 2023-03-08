#ifndef CONTROL_H
#define CONTROL_H

#include "Restaurant.h"
#include "View.h"

/*
Class  :  Control
Purpose:  This is the control class which initially create an object of the
Restaurant Class in heap then initilize the tables and do the reservations and
present the user with the menu to do different things

Critical Functions:
launch :  Lauch will control the entire program by initilizing and performing
the different operations as requested by the user

*/
class Control {
public:
  void launch();
  Control();
  ~Control();

private:
  void initTables(Restaurant *);
  void initReservations(Restaurant *);
  Restaurant *restaurant;
  View view;
};

#endif
