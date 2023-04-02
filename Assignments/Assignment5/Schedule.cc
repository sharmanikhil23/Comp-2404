#include <iomanip>
#include <iostream>
using namespace std;
#include <string>

#include "Schedule.h"

Schedule::Schedule(bool a) {
  // appts.setCompBehv(true);
}

bool Schedule::addAppt(Animal *a, int y, int m, int d, int h, int min) {

  if (y != CURR_YEAR || Date::validate(y, m, d) == false) {
    cout << "Error:  Year " << y << " is Invalid" << endl;
    return false;
  } else if (h < OPEN_HRS && h > CLOSE_HRS) {
    cout << "Error:  Hour " << h << " is Invalid" << endl;
    return false;
  } else if (m % 15 != 0) {
    cout << "Error:  Minutes " << m << " is Invalid" << endl;
    return false;
  } else {
    Date *date = new Date(y, m, d, h, min);
    Appt appt(a, date);

    int size = 0;
    Appt *data[MAX_ARR];

    appts.convertToArray(data, size);

    for (int i = 0; i < size; i++) {
      if (*(data[i]->getAptDate()) == *date) {
        // if we have the same day and time
        detailedError(data[i], &appt);
        return false;
      } else if ((data[i]->getAptDate())->sameDay(*date)) {
        (data[i]->getAptDate())->getTime().add(0, APPT_DURATION);
        if ((data[i]->getAptDate())->getTime() > date->getTime()) {
          (data[i]->getAptDate())->getTime().add(0, -APPT_DURATION);
          detailedError(data[i], &appt);
          return false;
        } else {
          date->getTime().add(0, APPT_DURATION);
          if ((data[i]->getAptDate())->getTime() > date->getTime()) {
            (data[i]->getAptDate())->getTime().add(0, -APPT_DURATION);
            date->getTime().add(0, -APPT_DURATION);
            detailedError(data[i], &appt);
            return false;
          }
        }
        (data[i]->getAptDate())->getTime().add(0, -APPT_DURATION);
      }
    }
    appts.add(&appt);
    return true;
    size++;
  }
}

void Schedule::detailedError(Appt *first, Appt *second) {
  cout << "Error: Appointment " << second->getAptId() << " on "
       << *(second->getAptDate()) << " conflict with " << first->getAptId()
       << " on " << *(first->getAptDate()) << endl;
}
