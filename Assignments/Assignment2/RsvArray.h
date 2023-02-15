#ifndef RSVARRAY_H
#define RSVARRAY_H

#include "defs.h"
#include "Reservation.h"


/*
 Class         :  RsvArray
 Purpose       :  This class is used to keep track of all reservation done by the users

 Critical attributes:
 void add(Reservation*): It will store the new reservation in the ascending order accoding to the date and
                         time

*/

class RsvArray
{
    private:
        Reservation** res;
        int capacity;
        int size;
    
    public:
        RsvArray(int= MAX_ARR);
        ~RsvArray();
        void add(Reservation*);
        int getSize();
        Reservation* get(int index);
        void print();
  
};

#endif

