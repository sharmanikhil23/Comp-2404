#ifndef PatronArray_H
#define PatronArray_H

#include "defs.h"

#include "Patron.h"

/*
 Class         :   PatronArray
 Purpose       :   This class is used to store the collection of the patrons in the array 

Critical attributes:
~PatronArray() : It is destructure which will deallocate all the object of the Patron class which we have 
                 added in help
*/
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

