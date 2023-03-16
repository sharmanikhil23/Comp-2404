#include <iostream>
using namespace std;
#include <string>

#include "IdArray.h"

IdArray::IdArray(bool a, int m) : Collection(a) {
  capacity = m;
  data = new Identifiable *[capacity];
  size = 0;
}

IdArray::~IdArray() {
  for (int i = 0; i < size; i++) {
    delete data[i];
  }
  delete[] data;
}

bool IdArray::add(Identifiable *obj) {

  if (size == capacity) {
    cout << "Error: Max Size reached " << endl;
    return false;
  }

  bool asc = Collection::asc;

  int index = 0;
  bool find = false;
  for (int i = 0; i < size; i++) {
    if (asc) {
      if (data[i]->getCompValue() > obj->getCompValue()) {
        find = true;
        index = i;
        break;
      }
    } else {
      if (data[i]->getCompValue() < obj->getCompValue()) {
        find = true;
        index = i;
        break;
      }
    }
  }

  if (find) {
    for (int i = size; i > index; i--) {
      data[i] = data[i - 1];
    }
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

void IdArray::print() {
  cout << endl;
  cout << "CUSTOMERS:" << endl;
  for (int i = 0; i < size; i++) {
    data[i]->print();
  }
}
