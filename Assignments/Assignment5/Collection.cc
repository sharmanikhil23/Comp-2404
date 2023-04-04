#include <iostream>
using namespace std;
#include <string>

#include "Collection.h"

Collection::Collection(bool a) : asc(a) {}

Collection::~Collection(){

}

void Collection::setAsc(bool a) { asc = a; }
