#include <iostream>
using namespace std;
#include <string>

#include "Identifiable.h"

Identifiable::Identifiable(int &i) : id(i++) {}

Identifiable::~Identifiable(){
  
}

int Identifiable::getId() { return id; }
