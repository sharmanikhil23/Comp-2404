#ifndef RSVARRAY_H
#define RSVARRAY_H

#include "defs.h"
#include "Reservation.h"

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

