#include <iostream>
using namespace std;
#include <string>

#include "Customer.h"

int Customer::nextId = CUSTOMER_IDS;

Customer::Customer(string n) : Identifiable(nextId) {
  name = n;
  pets = new IdList(true);
  nextId++;
}

void Customer::addAnimal(Animal *a) { pets->add(a); }

int Customer::getCompValue() { return pets->getSize(); }

void Customer::print() {
  cout << "Prinitng all the details of customer From Customer class" << endl;
}

string Customer::getCustomerName() { return name; }