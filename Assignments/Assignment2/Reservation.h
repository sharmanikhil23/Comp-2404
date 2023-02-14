#ifndef RESERVATION_H
#define RESERVATION_H

#include "Date.h"
#include "Patron.h"
#include "Time.h"

class Reservation
{
    private:
        int table;
        Date *date;
        Patron *patron;
        Time *time;
    
    public:
        Reservation(Date *d,Time *t, Patron *p ,int=1);
        ~Reservation();
        bool lessThan(Reservation *);
        bool matchDate(Date*);
        void print();
};

#endif

