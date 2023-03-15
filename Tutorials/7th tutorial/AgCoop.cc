#include <iostream>
using namespace std;
#include <string>

#include "AgCoop.h"

AgCoop::AgCoop() {}

void AgCoop::add(Animal *a) { list.add(a); }

void AgCoop::print() const { list.print(); }