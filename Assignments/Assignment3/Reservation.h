#ifndef RESERVATION_H
#define RESERVATION_H

#include "Date.h"
#include "Table.h"
#include "Time.h"
#include "defs.h"
/*
 Class  :   Reservation
 Purpose:   This class is used to make Reservation for the user and it does have
pointer for the table date and time

Critical Functions:
~Reservation:    It is the destructure it will deallocate the data and time but
it does not dealloc the table because if we dealloc it we will loose one table
from our list and cannot use it later

*/
class Reservation {
private:
  string patron;
  Table *table;
  Time *time;
  Date *date;

public:
  Reservation(string, Table *, Date *, Time *);
  ~Reservation();
  Reservation(Reservation *);
  int getReservedTableNumber();
  void print();
  bool overlaps(Date *, Time *);
  bool lessThan(Reservation *);
  bool equalDate(Date *);
};

#endif