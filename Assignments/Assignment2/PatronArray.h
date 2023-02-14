#ifndef PatronArray_H
#define PatronArray_H

#include "defs.h"

#include "Patron.h"

class PatronArray
{
  public:
    PatronArray();
    ~PatronArray();
    void add(Patron* p);
    void print();
    bool find(int, Patron**);


  private:
    Patron* elements[MAX_ARR];
    int   size;
};

#endif

