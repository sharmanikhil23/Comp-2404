#ifndef APPT_H
#define APPT_H

#include "Animal.h"
#include "Date.h"
#include "Identifiable.h"
#include "defs.h"

/*
Class  :  Appt
Purpose:  This is the Appt class which is used to make instance of the
Appt for the Clinic and also store the pointer to the animal and the date  and
this class in Inherited from the Identifiable class

Critical Functions:
ostream &operator<<(ostream &, Animal &): So we are doing the operator
overloading to print the details regarding the appointment data but as we do not
own the ostream class so we are providing it friendship so it can access the
data from the Appt class

*/

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