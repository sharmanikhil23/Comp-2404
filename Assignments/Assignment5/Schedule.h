#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Appt.h"
#include "CompareDate.h"
#include "Date.h"
#include "List.h"
#include "Time.h"
#include "defs.h"

class Schedule {

  friend ostream &operator<<(ostream &, Schedule &);

private:
  int numAppts;
  List<Appt *> appts;
  void detailedError(Appt *, Appt *);
  void dateError(int, int, int);
  void cleaningTempData(Appt **, Appt *);

public:
  Schedule();
  ~Schedule();
  bool addAppt(Animal *, int, int, int, int, int);
};

#endif