#ifndef LIST_H
#define LIST_H

#include "Animal.h"

class List {
  class Node {
  public:
    Animal *data;
    Node *next;
  };

public:
  List();
  ~List();
  void add(Animal *);
  void del(string, Animal **);
  void print() const;

private:
  Node *head;
};

#endif
