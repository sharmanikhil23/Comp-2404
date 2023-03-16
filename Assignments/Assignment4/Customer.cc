#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

#include "Customer.h"

int Customer::nextId = CUSTOMER_IDS;

Customer::Customer(string n) : Identifiable(nextId) { name = n; }

Customer::~Customer() {}

void Customer::addAnimal(Animal *a) { pets.add(a); }

int Customer::getCompValue() { return pets.getSize(); }

void Customer::print() {
  cout << setw(4) << Identifiable::getId() << "  " << getCustomerName() << endl;
  cout << "-----Pets" << endl;
  pets.print();
  cout << endl;
}

string Customer::getCustomerName() { return name; }