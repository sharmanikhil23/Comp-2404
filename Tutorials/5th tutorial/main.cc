#include <iostream>
using namespace std;

#include "Animal.h"
#include "Farm.h"
#include "List.h"
#define MAX_SIZE 10

void initFarms(Farm **arr, int &size);
void printFarms(Farm **arr, int size);
void dealloc(Farm **arr, int size);

int main() {
  Farm **data=new Farm *[MAX_SIZE];
  int nOfFarms = 0;
  initFarms(data, nOfFarms);
  printFarms(data, nOfFarms);
  dealloc(data, nOfFarms);

  return 0;
}

void initFarms(Farm **arr, int &size) {
  
  for (int i = 0; i < 5; i++) {
    arr[i] = new Farm();
    size++;
  }

  for (int i = 0; i < 5; i++) {
    arr[i]->add(new Animal("fluffy", 10, 20));
    arr[i]->add(new Animal("dog", 1, 15));
    arr[i]->add(new Animal("Cat", 12, 15));
  }
}

void printFarms(Farm **arr, int size) {
  for (int i = 0; i < size; i++) {
    arr[i]->print();
  }
}

void dealloc(Farm **arr, int size) {
  for (int i = 0; i < size; i++) {
    delete arr[i];
  }
  delete[] arr;
}
