#include <iostream>
using namespace std;
#include <string>

#include "Clinic.h"

Clinic::Clinic(string n) {
  name = n;
  animals.setCompBehv(new CompareAge<Animal *>(false));
  customers = new IdArray(false);

  sch = new Schedule();
}
Clinic::~Clinic() {
  delete sch;
  delete customers;
  animals.cleanupData();
}

void Clinic::add(Customer *c) { customers->add(c); }

void Clinic::add(Animal *a) { animals.add(a); }

bool Clinic::addAppt(int id, int y, int m, int d, int h, int min) {
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

bool Clinic::addToCustomer(Customer *c, int id) {

  Animal *temp = NULL;

  if (animals.find(id, &temp)) {
    // Animal *tempA = dynamic_cast<Animal *>(temp);
    temp->setParent(c);
    c->addAnimal(temp);
    return true;
  } else {
    return false;
  }
  return false;
}
void Clinic::print() {
  cout << "DATA FOR " << name << endl;
  printAnimals();
  printCustomers();
  printSchedule();
}
void Clinic::printCustomers() {
  cout << endl;
  cout << "CUSTOMERS:" << endl << endl;
  customers->print();
}
void Clinic::printAnimals() {
  cout << endl;
  cout << "ANIMALS" << endl << endl;
  cout << animals;
}

void Clinic::printSchedule() {
  cout << endl;
  cout << "SCHEDULE" << endl << endl;
  cout << *sch;
}
