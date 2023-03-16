#include <iostream>
using namespace std;
#include <string>

#include "IdArray.h"

IdArray::IdArray(int m, bool a) : Collection(a) {
  maxSize = m;
  data = new Identifiable *[maxSize];
  size = 0;
}

IdArray::~IdArray() {
  for (int i = 0; i < size; i++) {
    delete data[i];
  }
  delete[] data;
}

bool IdArray::add(Identifiable *obj) {

  if (size == maxSize) {
    cout << "Error: Max Size reached " << endl;
    return false;
  }

  bool asc = Collection::asc;
  int index = 0;
  bool find = false;
  for (int i = 0; i < size; i++) {
    index = i;
    if (asc) {
      if (data[i]->getCompValue() > obj->getCompValue()) {
        find = true;
        break;
      }
    } else {
      if (data[i]->getCompValue() < obj->getCompValue()) {
        find = true;
        break;
      }
    }
  }

  for (int i = size - 1; i > index; i--) {
    data[i + 1] = data[i];
  }

  if (find) {
    data[index] = obj;
  } else {
    data[size] = obj;
  }

  size++;
  return true;
}

bool IdArray::find(int id, Identifiable **foundObj) {
  for (int i = 0; i < size; i++) {
    if (id == data[i]->getCompValue()) {
      *foundObj = data[i];
      return true;
    }
  }

  foundObj = NULL;
  return false;
}

void IdArray::print() { cout << "Printing from IdArray" << endl; }