#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Restaurant.h"

Restaurant::Restaurant(string n) {
   name = n;
   numTables=0;
 }

Restaurant::~Restaurant() {
  for (int i = 0; i < numTables; i++) {
    delete tables[i];
  }
}

void Restaurant::addTable(Table *t) {

  if (numTables == MAX_ARR) {
    cout << "-------MAX SIZE REACHED------" << endl;
    delete t;
    return;
  }
  tables[numTables] = t;
  ++numTables;
}

void Restaurant::printReservations() {
  cout << "ALL RESERVATIONS AT " << name << endl;
  rsv.print();
}

void Restaurant::reserveTable(string p, int c, int year, int month, int day,
                              int hour, int minute) {
  if (Date::validate(day, month, year) == false) {
    cout << "ERROR: Reservation date ";
    Date::print(year, month, day);
    cout << " is invalid" << endl;

  } else if (Time::validate(hour, minute) == false) {
    cout << "Error: Time";
    Time::print(hour, minute);
    cout << "is invalid " << endl;

  } else if (hour < OPEN_HR || hour > CLOSE_HR) {
    cout << "Error: The requested time ";
    Time::print(hour, minute);
    cout << " is outside of our business hours" << endl;

  } else {

    int tempCap = capacityCalculator(c);
    if (tempCap > MAX_TABLE_CAP) {
      cout << "Error: The Requested Capacity of " << c
           << " cannot be accommodated" << endl;
      return;
    }

    Date *date = new Date(day, month, year);
    Time *time = new Time(hour, minute);
    int nOfRes = 0;

    Reservation **tempRes = new Reservation*[MAX_ARR];
    rsv.convertToArray(tempRes, nOfRes);


    bool added = false;

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
          added = true;
          break;
        }
      }
    }



    deallocArray(tempRes);

    if (added) {
      return;
    }

    cout << "No avaliable table could be found for " << c << " people on ";
    date->print();
    cout << " @ ";
    time->print();
    cout << endl;
    delete date;
    delete time;
  }
}

int Restaurant::capacityCalculator(int cap) {
  if (cap % 2 == 0 || cap > MAX_TABLE_CAP) {
    return cap;
  } else {
    return cap + 1;
  }
}

void Restaurant::deallocArray(Reservation **tempRes) { delete[] tempRes; }
