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

ostream &operator<<(ostream &output, Customer &a) {
  output << setw(4) << a.getId() << "  " << a.getCustomerName() << endl;
  output << "-----Pets" << endl;
  a.pets.print();
  output << endl << endl;
  return output;
}

void Customer::print() { cout << *this; }
string Customer::getCustomerName() { return name; }