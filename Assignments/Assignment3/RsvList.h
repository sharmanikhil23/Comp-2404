#ifndef RSVLIST_h
#define RSVLIST_h

#include "Reservation.h"

/*
 Class  :   RsvList
 Purpose:   This class is the main class of the entire program which does help
to store all the reservation in the linked list and in the ascending order
according to the time

Critical Functions:
~RsvList():    Helps in deallocating the entire list first reservation pointer
then node

*/
class RsvList {

  class Node {
  public:
    Node *next;
    Reservation *r;
  };

public:
  RsvList();
  ~RsvList();
  void add(Reservation *r);
  void convertToArray(Reservation **, int &);
  void print();

private:
  Node *head;
};

#endif