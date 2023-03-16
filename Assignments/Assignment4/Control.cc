#include <iostream>
using namespace std;
#include <string>

#include "Control.h"

Control::Control() {
  c = new Clinic();
  v = new View();
}
Control::~Control() {
  delete v;
  delete c;
}

void Control::launch() {
  initAnimals(c);

  initCustomers(c);

  int choice = 0;
  int &choiceRef = choice;

  v->showMenu(choiceRef);
  while (choice != 0) {
    if (choice == 1) {
      c->print();
    } else if (choice == 2) {
      c->printAnimals();
    } else if (choice == 3) {
      c->printCustomers();
    }
    v->showMenu(choiceRef);
  }
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

void Control::initAnimals(Clinic *myClinic) {
  myClinic->add(new Animal(C_DOG, "Lily", "F", 1, 6));
  myClinic->add(new Animal(C_DOG, "Betsy", "F", 5, 0));
  myClinic->add(new Animal(C_DOG, "Killer", "F", 3, 5));
  myClinic->add(new Animal(C_DOG, "Fluffy", "M", 2, 7));
  myClinic->add(new Animal(C_CAT, "Lady", "F", 11, 0));
  myClinic->add(new Animal(C_SPEC_OTHER, "Pecorino", "M", 0, 3));
  myClinic->add(new Animal(C_DOG, "Leon", "M", 4, 0));
  myClinic->add(new Animal(C_SPEC_OTHER, "Quasar", "M", 1, 4));
  myClinic->add(new Animal(C_CAT, "Shadow", "M", 5, 2));
  myClinic->add(new Animal(C_CAT, "Luka", "M", 7, 0));
  myClinic->add(new Animal(C_CAT, "Fiona", "F", 8, 0));
  myClinic->add(new Animal(C_CAT, "Ruby", "F", 5, 0));
  myClinic->add(new Animal(C_SPEC_OTHER, "Ziggy", "F", 3, 8));
  myClinic->add(new Animal(C_SPEC_OTHER, "Quark", "M", 9, 0));
  myClinic->add(new Animal(C_SPEC_OTHER, "Gruyere", "M", 0, 3));
  myClinic->add(new Animal(C_SPEC_OTHER, "Limburger", "M", 0, 3));
}
