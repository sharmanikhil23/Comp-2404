#include <iostream>
using namespace std;
#include <string>

#include "Clinic.h"

Clinic::Clinic(string n) {
  name = n;
  animals = new IdList(false);
  customers = new IdArray(false);
}
Clinic::~Clinic() {
  delete animals;
  delete customers;
}

void Clinic::add(Customer *c) { customers->add(c); }

void Clinic::add(Animal *a) { animals->add(a); }

bool Clinic::addToCustomer(Customer *c, int id) {

  Identifiable *temp = NULL;

  if (animals->find(id, &temp)) {
    Animal *tempA = dynamic_cast<Animal *>(temp);
    tempA->setParent(c);
    c->addAnimal(tempA);
    return true;
  } else {
    return false;
  }
  // long implementation
}
void Clinic::print() {
  cout << "DATA FOR " << name << endl;
  printAnimals();
  printCustomers();
}
void Clinic::printCustomers() {
  cout << endl;
  cout << "CUSTOMERS:" << endl;
  cout << endl;
  customers->print();
}
void Clinic::printAnimals() {
  cout << endl;
  cout << "ANIMALS:" << endl;
  animals->print();
}
