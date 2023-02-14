#ifndef PatronArray_H
#define PatronArray_H

#include "defs.h"

#include "Patron.h"

class PatronArray
{
  public:
    PatronArray();
    ~PatronArray();
    void add(Date*);
    void print();
    bool find(int, Patron**);


  private:
    Patron* elements[MAX_ARR_SIZE];
    int   size;
};

#endif

