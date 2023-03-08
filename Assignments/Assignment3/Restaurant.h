#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "Date.h"
#include "RsvList.h"
#include "Time.h"
#include "defs.h"

/*
 Class  :   Restaurant
 Purpose:   This class is the main class of the entire program which does store
all the table in the array and all the reservation with the instance of the
rsvList

Critical Functions:
addTable:    It helps to make reservation for the customer and do run couple of
constrains to make sure customer able to make a reservation if possible if there
is no conflict and all the information provided by the customer is correct

*/

class Restaurant {

private:
  string name;
  int numTables;
  Table *tables[MAX_ARR];
  RsvList rsv;
  int capacityCalculator(int);

public:
  Restaurant(string = "User Restaurant");
  ~Restaurant();
  void reserveTable(string, int, int, int, int, int, int = 0);
  void addTable(Table *);
  void printReservations();
  void deallocArray(Reservation **);
};
#endif