#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Appt.h"
#include "CompareDate.h"
#include "Date.h"
#include "List.h"
#include "Time.h"
#include "defs.h"

/*
 Class  :   Schedule
 Purpose:   This class helps us to keep track of the schedule of the Clinic with
the help of List class

Critical Functions:
 ~Schedule(): it will call the cleanup function of the List class to clean up
the data not the nodes and nodes will be clean up as soon as the object will go
out from the stack

*/
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