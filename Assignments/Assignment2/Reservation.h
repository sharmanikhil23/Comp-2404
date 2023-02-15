#ifndef RESERVATION_H
#define RESERVATION_H

#include "Date.h"
#include "Patron.h"
#include "Time.h"

/*
 Class         :  Reservation
 Purpose       :  This class is used to make object for Reservations

Critical attributes:
~Reservation() :  As this class have pointer for date, time and patrons so it will really helps to deallocate
*/
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

