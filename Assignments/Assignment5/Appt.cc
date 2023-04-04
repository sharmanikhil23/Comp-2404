#include <iomanip>
#include <iostream>
using namespace std;
#include <string>

#include "Appt.h"

int Appt::nextId = APPT_IDS;

Appt::Appt(Animal *a, Date *d) : Identifiable(nextId) {
  animal = a;
  date = d;
}

Appt::~Appt() { delete date; }

ostream &operator<<(ostream &output, Appt &a) {

  output << left << setw(4) << a.getId() << " : " << *(a.date) << " -- "
         << setfill(' ') << left << setw(15) << a.animal->getName()
         << " with parent " << a.animal->getParentName() << endl;

  return output;
}

int Appt::getId() { return id; };
Date *Appt::getAptDate() { return date; };
void Appt::print() { cout << *this; }

int Appt::getCompValue() { return 0; }

bool sameDay(Appt *a2) { return true; }