#ifndef RSVLIST_h
#define RSVLIST_h

#include "Reservation.h"

class RsvList{

    class Node{
        public:
            Node *next;
            Reservation *r;
    };

    public:
        RsvList();
        ~RsvList();
        void add(Reservation* r);
        void convertToArray(Reservation**,int&);
        void print();
        
    private:
        Node *head;
};

#endif