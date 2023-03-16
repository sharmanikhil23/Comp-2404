#include <iostream>
using namespace std;
#include <string>

#include "Identifiable.h"

Identifiable::Identifiable(int &i) : id(i++) {}

int Identifiable::getId() { return id; }
