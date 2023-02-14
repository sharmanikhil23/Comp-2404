
#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "defs.h"
#include "PatronArray.h"
#include "Time.h"
#include "Date.h"
#include "RsvArray.h"


class Restaurant
{
    private:
       string name;
       PatronArray patrons;
       RsvArray rsv;
    
    public:
        Restaurant(string="Restaurant Name");
        ~Restaurant();
        void addPatron(Patron*);
        void reserveTable(int,int, int, int,int,int,int);
        void printReservations();
        void printSchedule(int,int,int);
        void printPatrons();
};

#endif



