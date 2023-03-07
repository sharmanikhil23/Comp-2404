#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Table.h"

Table::Table(int n, int c){
    number=n;
    capacity=c;
}

int Table::getTCapacity(){
    return capacity;
}

int Table::getTNumber(){
    return number;
}