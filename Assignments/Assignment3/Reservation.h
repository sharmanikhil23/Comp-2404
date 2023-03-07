#ifndef RESERVATION_H
#define RESERVATION_H

#include "Date.h"
#include "Table.h"
#include "Time.h"

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