#include <iostream>
using namespace std;

#include "PatronArray.h"

PatronArray::PatronArray()
{
  size = 0;
}

PatronArray::~PatronArray()
{
  for (int i=0; i<size; ++i) {
    delete(elements[i]);
  }
}

void PatronArray::add(Date* d)
{
  if (size >= MAX_ARR_SIZE)
    return;

  elements[size] = d;
  ++size;
}

void PatronArray::print()
{
  cout << endl << endl << "Patrons: " << endl;
  for (int i=0; i<size; ++i) {
    elements[i]->printLong();
  }

  cout << endl;
}

bool PatronArray::find(int id, Patron **p){

  for (int i=0; i<size; ++i) {
    if(elements[i]->id==id){
      *p=elements[i];
      return true;
    }
  }

  *p=null;
  return false;
}



