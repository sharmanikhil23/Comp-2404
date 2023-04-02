#ifndef APPT_H
#define APPT_H

#include "Animal.h"
#include "Date.h"
#include "defs.h"

class Appt {

  friend ostream &operator<<(ostream &output, Appt &a);

private:
  static int nextId;
  int id;
  Animal *animal;
  Date *date;

public:
  Appt(Animal *, Date *);
  ~Appt();
  bool sameDay(Appt *);
  int getAptId();
  Date *getAptDate();
};

#endif