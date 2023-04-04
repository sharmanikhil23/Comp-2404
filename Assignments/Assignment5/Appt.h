#ifndef APPT_H
#define APPT_H

#include "Animal.h"
#include "Date.h"
#include "Identifiable.h"
#include "defs.h"

class Appt : public Identifiable {

  friend ostream &operator<<(ostream &output, Appt &a);

private:
  static int nextId;
  Animal *animal;
  Date *date;

public:
  Appt(Animal *, Date *);
  ~Appt();
  bool sameDay(Appt *);
  int getId();
  Date *getAptDate();
  virtual int getCompValue();
  virtual void print();
};

#endif