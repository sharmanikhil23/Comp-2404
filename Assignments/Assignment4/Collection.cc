#include <iostream>
using namespace std;
#include <string>

#include "Collection.h"

Collection::Collection(bool a) : asc(a) {}

void Collection::setAsc(bool a) { asc = a; }
