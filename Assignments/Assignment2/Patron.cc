#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Patron.h"

int Patron::nextId=5001;

Patron::Patron(string n){
  name=n;
  id=nextId;
  nextId++;
}

int Patron::getId(){
  return id;
}

string Patron::getName(){
  return name;
}

void Patron::print(){
  cout<<"Patron #"<<id<<" "<<name<<endl;
}
