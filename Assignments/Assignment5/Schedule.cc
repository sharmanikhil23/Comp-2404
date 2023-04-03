#include <iomanip>
#include <iostream>
using namespace std;
#include <string>

#include "Schedule.h"

Schedule::Schedule() { appts.setCompBehv(new CompareDate<Appt *>(true)); }

Schedule::~Schedule() { appts.cleanupData(); }

bool Schedule::addAppt(Animal *a, int y, int m, int d, int h, int min) {

  if (y != CURR_YEAR) {
    cout << "ERROR: Year " << y << " is Invalid" << endl;
    return false;
  } else if (Date::validate(y, m, d) == false) {
    dateError(y, m, d);
    return false;
  } else if (h < OPEN_HRS || h > CLOSE_HRS || min > 45) {
    cout << "ERROR: Hour " << h << " is Invalid" << endl;
    return false;
  } else if (min % 15 != 0) {
    cout << "ERROR: Minutes " << min << " is Invalid" << endl;
    return false;
  } else {
    Date *newDate = new Date(y, m, d, h, min);
    Appt *appt = new Appt(a, newDate);

    int size = 0;
    Appt **data = new Appt *[MAX_ARR];

    appts.convertToArray(data, size);

    for (int i = 0; i < size; i++) {

      if (*(data[i]->getAptDate()) == *newDate) {
        // if appointment is at same day and time
        detailedError(data[i], appt);
        cleaningTempData(data, appt);
        return false;
      } else if ((data[i]->getAptDate())->sameDay(*newDate)) {
        // if it is at same day but not at the same time
        Time originalTime = data[i]->getAptDate()->getTime();
        Time originalEndingTime = (data[i]->getAptDate()->getTime());
        originalEndingTime.add(0, APPT_DURATION);

        Time tempTime = newDate->getTime();
        Time tempEndingTime = newDate->getTime();
        tempEndingTime.add(0, APPT_DURATION);

        if (originalTime < tempTime) {
          if (originalEndingTime > tempTime) {
            detailedError(data[i], appt);
            cleaningTempData(data, appt);
            return false;
          }
        } else if (originalTime > tempTime && originalTime < tempEndingTime) {
          detailedError(data[i], appt);
          cleaningTempData(data, appt);
          return false;
        }
      }
    }
    cleaningTempData(data, NULL);

    appts.add(appt);
    size++;

    return true;
  }
}

void Schedule::detailedError(Appt *first, Appt *second) {
  cout << "ERROR: Appointment " << second->getId() << " on "
       << *(second->getAptDate()) << " conflict with " << first->getId()
       << " on " << *(first->getAptDate()) << endl;
}

void Schedule::dateError(int y, int m, int d) {
  cout << "ERROR: Date " << y << "-" << right << setfill('0') << setw(2) << m
       << "-" << setfill('0') << setw(2) << d << " is Invalid" << endl;
}

ostream &operator<<(ostream &out, Schedule &s) {
  out << s.appts;
  return out;
}

void Schedule::cleaningTempData(Appt **data, Appt *current) {
  delete[] data;
  if (current != NULL) {
    delete current;
  }
}
