#ifndef IDLIST_H
#define IDLIST_H

#include "Collection.h"
#include "IdList.h"

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