#include <iostream>
using namespace std;
#include <string>

#include "Control.h"

Control::Control() { restaurant = new Restaurant("Nikhil Bistro"); }

Control::~Control() { delete restaurant; }

void Control::launch() {
  initTables(restaurant);
  initReservations(restaurant);
  int choice = 0;
  view.showMenu(choice);
  while (choice != 0) {
    if (choice == 1) {
      restaurant->printReservations();
    } else if (choice == 2) {
      string name;
      int cap;
      int y, m, d;
      int hour, minutes;
      view.addRes(name, cap, y, m, d, hour, minutes);
      restaurant->reserveTable(name, cap, y, m, d, hour, minutes);
    }

    view.showMenu(choice);
  }
}

void Control::initReservations(Restaurant *r) {
  r->reserveTable("Juliet", 4, 2023, 5, 13, 12);
  r->reserveTable("Sayid", 4, 2023, 14, 13, 14, 30);
  r->reserveTable("Sayid", 4, 2023, 4, 31, 14, 30);

  r->reserveTable("Juliet", 4, 2023, 5, 13, 17, 30);
  r->reserveTable("James", 4, 2023, 5, 13, 19, 0);
  r->reserveTable("Sayid", 2, 2023, 5, 13, 19, 0);
  r->reserveTable("Jack", 2, 2023, 5, 13, 19, 0);
  r->reserveTable("Kate", 2, 2023, 5, 13, 19, 0);

  r->reserveTable("Hugo", 4, 2023, 5, 13, 19, 30);
  r->reserveTable("Hugo", 2, 2023, 5, 13, 18, 30);
  r->reserveTable("Hugo", 2, 2023, 5, 13, 18, 30);
  r->reserveTable("Hugo", 8, 2023, 5, 13, 20, 30);
  r->reserveTable("Juliet", 2, 2023, 5, 13, 20, 30);
  r->reserveTable("Sayid", 2, 2023, 5, 13, 20, 0);
  r->reserveTable("Kate", 4, 2023, 5, 13, 20, 0);
  r->reserveTable("Sayid", 2, 2023, 5, 13, 21, 0);
  r->reserveTable("Jack", 2, 2023, 5, 13, 18, 0);
  r->reserveTable("Jack", 2, 2023, 5, 13, 17, 30);

  r->reserveTable("Hugo", 4, 2023, 5, 14, 19, 15);
  r->reserveTable("Kate", 2, 2023, 5, 14, 20, 45);
  r->reserveTable("Jack", 4, 2023, 5, 14, 19, 45);
  r->reserveTable("Hugo", 4, 2023, 5, 14, 18, 0);
  r->reserveTable("Kate", 2, 2023, 5, 14, 20, 0);
  r->reserveTable("Kate", 2, 2023, 5, 14, 20, 15);
  r->reserveTable("Kate", 2, 2023, 5, 14, 20, 30);
  r->reserveTable("Jack", 4, 2023, 5, 14, 20, 15);
  r->reserveTable("Kate", 2, 2023, 5, 14, 21, 0);
  r->reserveTable("Juliet", 2, 2023, 5, 14, 20, 30);
  r->reserveTable("Juliet", 2, 2023, 5, 14, 19, 15);
  r->reserveTable("Juliet", 4, 2023, 5, 14, 19, 15);
  r->reserveTable("Sayid", 4, 2023, 5, 14, 19, 0);
  r->reserveTable("Juliet", 2, 2023, 5, 14, 19, 0);
}

void Control::initTables(Restaurant *r) {
  r->addTable(new Table(1, 6));
  r->addTable(new Table(2, 4));
  r->addTable(new Table(3, 2));
  r->addTable(new Table(4, 2));
  r->addTable(new Table(5, 4));
  r->addTable(new Table(6, 4));
  r->addTable(new Table(7, 2));
  r->addTable(new Table(8, 2));
  r->addTable(new Table(9, 4));
  r->addTable(new Table(10, 2));
}
