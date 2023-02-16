#include <iostream>
using namespace std;

#include "PatronArray.h"

PatronArray::PatronArray(){
  size = 0;
}

PatronArray::~PatronArray(){
  for (int i=0; i<size; ++i) {
    delete(elements[i]);
  }
}

void PatronArray::add(Patron* p){
  if (size >= MAX_ARR)
    return;

  elements[size] = p;
  ++size;
}

void PatronArray::print()
{
  cout << endl << endl << "Patrons: " << endl;
  for (int i=0; i<size; ++i) {
    elements[i]->print();
  }

  cout << endl;
}

bool PatronArray::find(int id, Patron **p){
  for (int i=0; i<size; ++i) {
    if(elements[i]->getId()==id){
    *p=elements[i];
    return true;
    }
  }

  *p=NULL;
  return false;
}
