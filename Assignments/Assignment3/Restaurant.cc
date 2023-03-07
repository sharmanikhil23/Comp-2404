#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Restaurant.h"

Restaurant::Restaurant(string n) { name = n; }

Restaurant::~Restaurant() {
  for (int i = 0; i < numTables; i++) {
    delete tables[i];
  }
}

void Restaurant::addTable(Table *t) {
  if (numTables == MAX_ARR) {
    cout << "-------MAX SIZE REACHED------" << endl;
    return;
  }
  tables[numTables++] = t;
}

void Restaurant::printReservations() {
  cout << "ALL RESERVATIONS AT " << name << endl;
  rsv.print();
}

void Restaurant::reserveTable(string p, int c, int year, int month, int day,
                              int hour, int minute) {
  if (Date::validate(day, month, year) == false) {
    cout << "ERROR: Reservation date " << year << "-" << setfill('0') << setw(2)
         << month << "-" << setfill('0') << setw(2) << day << " is invalid"
         << endl;
    return;
  } else if (Time::validate(hour, minute) == false) {
    cout << "Error: Time" << setfill('0') << setw(2) << hour << ":"
         << setfill('0') << setw(2) << minute << " is invalid" << endl;
    return;
  } else if (hour < OPEN_HR || hour > CLOSE_HR) {
    cout << "Error: The requested time " << setfill('0') << setw(2) << hour
         << ":" << setfill('0') << setw(2) << minute
         << " is outside of our business hours" << endl;
    return;
  } else {
    Date *date = new Date(day, month, year);
    Time *time = new Time(hour, minute);
    int tempCap = capacityCalculator(c);
    if (tempCap > MAX_TABLE_CAP) {
      cout << "Error: The Requested Capacity of " << c
           << " cannot be accommodated" << endl;
      return;
    }

    int nOfRes = 0;
    Reservation **tempRes;
    tempRes = new Reservation *[MAX_ARR];
    rsv.convertToArray(tempRes, nOfRes);

    for (int i = 0; i < numTables; i++) {
      if (tables[i]->getTCapacity() == tempCap) {
        bool tableFlag = true;
        for (int j = 0; j < nOfRes; j++) {
          if ((tempRes[j]->getReservedTableNumber()) ==
              (tables[i]->getTNumber())) {

            if (tempRes[j]->overlaps(date, time) == false) {
              if (tempRes[j]->equalDate(date)) {
                tableFlag = tableFlag && true;
              }
            } else {
              tableFlag = tableFlag && false;
            }
          }
        }
        if (tableFlag == true) {
          Reservation *temp = new Reservation(p, tables[i], date, time);
          rsv.add(temp);
          deallocArray(tempRes, nOfRes);
          return;
        }
      }
    }

    cout << "No avaliable table could be found for " << c << " people on ";
    date->print();
    cout << " @ ";
    time->print();
    cout << endl;
    deallocArray(tempRes, nOfRes);
  }
}

int Restaurant::capacityCalculator(int cap) {
  if (cap % 2 == 0 || cap > MAX_TABLE_CAP) {
    return cap;
  } else {
    return cap + 1;
  }
}

void Restaurant::deallocArray(Reservation **tempRes, int nOfRes) {
  //   for (int i = 0; i < nOfRes; i++) {
  //     delete tempRes[i];
  //   }
  delete[] tempRes;
}
