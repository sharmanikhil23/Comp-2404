#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Appt.h"
#include "Date.h"
#include "List.h"
#include "Time.h"
#include "defs.h"

class Schedule {
private:
  int numAppts;
  List<Appt *> appts;
  void detailedError(Appt *, Appt *);

public:
  Schedule(bool);
  ~Schedule();
  bool addAppt(Animal *, int, int, int, int, int);
};

#endif