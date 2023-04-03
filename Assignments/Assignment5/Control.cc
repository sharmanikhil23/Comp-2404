#include <iostream>
using namespace std;
#include <string>

#include "Control.h"

Control::Control() {
  sch = new Schedule();
  animals.setCompBehv(new CompareAge<Animal *>(false));
}

Control::~Control() {
  delete sch;
  animals.cleanupData();
}

void Control::launch() {
  initAnimals();
  initSchedule();
  int choice = 0;
  v.showMenu(choice);

  while (choice != 0) {
    if (choice == 1) {
      cout << *sch;
    } else if (choice == 2) {
      int i, y, m, d, h, min;
      v.createAppointment(i, y, m, d, h, min);
      if (addAppt(i, y, m, d, h, min)) {
        cout << "STATUS: Appointment was added " << endl;
      } else {
        cout << "STATUS: Appointment could not added " << endl;
      }
    } else if (choice == 3) {
      cout << "ANIMALS" << endl;
      cout << animals;
    }
    v.showMenu(choice);
  }
}

void Control::initAnimals() {
  animals.add(new Animal(C_DOG, "Lily", "F", 1, 6, "Sonja"));
  animals.add(new Animal(C_DOG, "Betsy", "F", 5, 0, "NONE"));
  animals.add(new Animal(C_DOG, "Killer", "F", 3, 5, "Lee"));
  animals.add(new Animal(C_DOG, "Fluffy", "M", 2, 7, "NONE"));
  animals.add(new Animal(C_CAT, "Lady", "F", 11, 0, "Laura"));
  animals.add(new Animal(C_SPEC_OTHER, "Pecorino", "M", 0, 3, "Kara"));
  animals.add(new Animal(C_DOG, "Leon", "M", 4, 0, "Sonja"));
  animals.add(new Animal(C_SPEC_OTHER, "Quasar", "M", 1, 4, "Sharon"));
  animals.add(new Animal(C_CAT, "Shadow", "M", 5, 2, "Bill"));
  animals.add(new Animal(C_CAT, "Luka", "M", 7, 0, "Bill"));
  animals.add(new Animal(C_CAT, "Fiona", "F", 8, 0, "NONE"));
  animals.add(new Animal(C_CAT, "Ruby", "F", 5, 0, "NONE"));
  animals.add(new Animal(C_SPEC_OTHER, "Ziggy", "F", 3, 8, "Laura"));
  animals.add(new Animal(C_SPEC_OTHER, "Quark", "M", 9, 0, "Sharon"));
  animals.add(new Animal(C_SPEC_OTHER, "Gruyere", "M", 0, 3, "Kara"));
  animals.add(new Animal(C_SPEC_OTHER, "Limburger", "M", 0, 3, "Kara"));
}

void Control::initSchedule() {

  addAppt(1002, 2023, 5, 10, 11, 15);
  addAppt(1005, 2023, 5, 10, 11, 30); // conflict
  addAppt(1005, 2023, 5, 10, 11, 45);
  addAppt(1012, 2023, 5, 10, 11, 45); // conflict
  addAppt(1012, 2023, 5, 10, 12, 0);  // conflict
  addAppt(1015, 2023, 5, 10, 11, 0);  // conflict
  addAppt(1015, 2023, 5, 10, 11, 0);  // conflict
  addAppt(1013, 2023, 6, 8, 10, 0);
  addAppt(1007, 2023, 6, 8, 9, 45); // conflict
  addAppt(1007, 2023, 6, 8, 9, 30);
  addAppt(1010, 2023, 5, 9, 11, 15);

  addAppt(1035, 2023, 6, 8, 11, 15);  // error
  addAppt(1006, 2018, 5, 8, 11, 45);  // error
  addAppt(1006, 2023, 14, 1, 11, 45); // error
  addAppt(1006, 2023, 5, 41, 11, 45); // error
  addAppt(1006, 2023, 5, 8, 1, 45);   // error
  addAppt(1006, 2023, 5, 8, 11, 25);  // error
}

bool Control::addAppt(int id, int y, int m, int d, int h, int min) {
  Animal *elm = NULL;
  bool found = animals.find(id, &elm);

  if (found) {
    return sch->addAppt(elm, y, m, d, h, min);
  } else {
    cout << endl << endl;
    cout << "ERROR: Animal Id " << id << " was not found" << endl;
    return false;
  }
}
