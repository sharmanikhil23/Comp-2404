#include <iostream>
using namespace std;
#include <string>

#include "Farm.h"

int Farm::nextId = 1;

Farm::Farm() { id = nextId++; }

Farm::~Farm() {}

void Farm::print() {
  cout << "Farm id : " << id << endl;
  data.print();
}

int Farm::getNextId() { return nextId; }

void Farm::add(Animal *a) { data.add(a); }