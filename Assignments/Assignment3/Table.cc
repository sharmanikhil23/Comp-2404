#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Table.h"

Table::Table(int n, int c) {
  number = n;
  capacity = c;
}

Table::~Table() { cout << "Table destructure called" << endl; }

int Table::getTCapacity() { return capacity; }

int Table::getTNumber() { return number; }