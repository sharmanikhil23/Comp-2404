#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "Date.h"
#include "RsvList.h"
#include "Time.h"
#include "defs.h"

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
  void deallocArray(Reservation **, int);
};
#endif