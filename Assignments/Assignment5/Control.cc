#include <iostream>
using namespace std;
#include <string>

#include "Control.h"

Control::Control() { c = new Clinic(); }

Control::~Control() { delete c; }

void Control::launch() {
  initAnimals();
  initCustomers(c);
  initSchedule();
  int choice = 0;
  v.showMenu(choice);

  while (choice != 0) {
    if (choice == 1) {
      c->print();
    } else if (choice == 2) {
      c->printAnimals();
    } else if (choice == 3) {
      c->printCustomers();
    } else if (choice == 4) {
      c->printSchedule();
    } else if (choice == 5) {
      int i, y, m, d, h, min;
      v.createAppointment(i, y, m, d, h, min);
      if (c->addAppt(i, y, m, d, h, min)) {
        cout << "STATUS: Appointment was added " << endl;
      } else {
        cout << "STATUS: Appointment could not added " << endl;
      }
    }
    v.showMenu(choice);
  }
}

void Control::initAnimals() {
  c->add(new Animal(C_DOG, "Lily", "F", 1, 6));
  c->add(new Animal(C_DOG, "Betsy", "F", 5, 0));
  c->add(new Animal(C_DOG, "Killer", "F", 3, 5));
  c->add(new Animal(C_DOG, "Fluffy", "M", 2, 7));
  c->add(new Animal(C_CAT, "Lady", "F", 11, 0));
  c->add(new Animal(C_SPEC_OTHER, "Pecorino", "M", 0, 3));
  c->add(new Animal(C_DOG, "Leon", "M", 4, 0));
  c->add(new Animal(C_SPEC_OTHER, "Quasar", "M", 1, 4));
  c->add(new Animal(C_CAT, "Shadow", "M", 5, 2));
  c->add(new Animal(C_CAT, "Luka", "M", 7, 0));
  c->add(new Animal(C_CAT, "Fiona", "F", 8, 0));
  c->add(new Animal(C_CAT, "Ruby", "F", 5, 0));
  c->add(new Animal(C_SPEC_OTHER, "Ziggy", "F", 3, 8));
  c->add(new Animal(C_SPEC_OTHER, "Quark", "M", 9, 0));
  c->add(new Animal(C_SPEC_OTHER, "Gruyere", "M", 0, 3));
  c->add(new Animal(C_SPEC_OTHER, "Limburger", "M", 0, 3));

  // c->add(new Animal(C_DOG, "Lily", "F", 1, 6, "Sonja"));
  // c->add(new Animal(C_DOG, "Betsy", "F", 5, 0, "NONE"));
  // c->add(new Animal(C_DOG, "Killer", "F", 3, 5, "Lee"));
  // c->add(new Animal(C_DOG, "Fluffy", "M", 2, 7, "NONE"));
  // c->add(new Animal(C_CAT, "Lady", "F", 11, 0, "Laura"));
  // c->add(new Animal(C_SPEC_OTHER, "Pecorino", "M", 0, 3, "Kara"));
  // c->add(new Animal(C_DOG, "Leon", "M", 4, 0, "Sonja"));
  // c->add(new Animal(C_SPEC_OTHER, "Quasar", "M", 1, 4, "Sharon"));
  // c->add(new Animal(C_CAT, "Shadow", "M", 5, 2, "Bill"));
  // c->add(new Animal(C_CAT, "Luka", "M", 7, 0, "Bill"));
  // c->add(new Animal(C_CAT, "Fiona", "F", 8, 0, "NONE"));
  // c->add(new Animal(C_CAT, "Ruby", "F", 5, 0, "NONE"));
  // c->add(new Animal(C_SPEC_OTHER, "Ziggy", "F", 3, 8, "Laura"));
  // c->add(new Animal(C_SPEC_OTHER, "Quark", "M", 9, 0, "Sharon"));
  // c->add(new Animal(C_SPEC_OTHER, "Gruyere", "M", 0, 3, "Kara"));
  // c->add(new Animal(C_SPEC_OTHER, "Limburger", "M", 0, 3, "Kara"));
}

void Control::initSchedule() {

  c->addAppt(1002, 2023, 5, 10, 11, 15);
  c->addAppt(1005, 2023, 5, 10, 11, 30); // conflict
  c->addAppt(1005, 2023, 5, 10, 11, 45);
  c->addAppt(1012, 2023, 5, 10, 11, 45); // conflict
  c->addAppt(1012, 2023, 5, 10, 12, 0);  // conflict
  c->addAppt(1015, 2023, 5, 10, 11, 0);  // conflict
  c->addAppt(1015, 2023, 5, 10, 11, 0);  // conflict
  c->addAppt(1013, 2023, 6, 8, 10, 0);
  c->addAppt(1007, 2023, 6, 8, 9, 45); // conflict
  c->addAppt(1007, 2023, 6, 8, 9, 30);
  c->addAppt(1010, 2023, 5, 9, 11, 15);

  c->addAppt(1035, 2023, 6, 8, 11, 15);  // error
  c->addAppt(1006, 2018, 5, 8, 11, 45);  // error
  c->addAppt(1006, 2023, 14, 1, 11, 45); // error
  c->addAppt(1006, 2023, 5, 41, 11, 45); // error
  c->addAppt(1006, 2023, 5, 8, 1, 45);   // error
  c->addAppt(1006, 2023, 5, 8, 11, 25);  // error
}

void Control::initCustomers(Clinic *myClinic) {
  Customer *c;

  c = new Customer("Lee");

  myClinic->addToCustomer(c, 1003);
  myClinic->add(c);

  c = new Customer("Kara");
  myClinic->addToCustomer(c, 1016);
  myClinic->addToCustomer(c, 1015);
  myClinic->addToCustomer(c, 1006);
  myClinic->add(c);

  c = new Customer("Laura");
  myClinic->addToCustomer(c, 1013);
  myClinic->addToCustomer(c, 1005);
  myClinic->add(c);

  c = new Customer("Gaius");
  myClinic->add(c);

  c = new Customer("Bill");
  myClinic->addToCustomer(c, 1010);
  myClinic->addToCustomer(c, 1009);
  myClinic->add(c);

  c = new Customer("Sharon");
  myClinic->addToCustomer(c, 1014);
  myClinic->addToCustomer(c, 1008);
  myClinic->add(c);

  c = new Customer("Karl");
  myClinic->add(c);

  c = new Customer("Sonja");
  myClinic->addToCustomer(c, 1007);
  myClinic->addToCustomer(c, 1001);
  myClinic->add(c);
}