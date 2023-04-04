#ifndef IDLIST_H
#define IDLIST_H

#include "Collection.h"
#include "IdList.h"

/*
Class  :  IdList
Purpose:  This is important class for Clinic as it does store all the Animals as
the linked list

Critical Functions:
~IdList(): It will only deallocate the nodes which stores the animals for the
customer but not the data

cleanupData(); It will clean up all the data in animal collection

*/

class IdList : public Collection {

  class Node {
  public:
    Identifiable *data;
    Node *next;
  };

public:
  IdList(bool = true);
  IdList(IdList *);
  virtual ~IdList();
  virtual bool add(Identifiable *);
  virtual bool find(int, Identifiable **);
  virtual void print();
  int getSize();
  void cleanupData();

private:
  int size;
  Node *head;
  bool getAsc();
};
#endif