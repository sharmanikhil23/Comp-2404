#ifndef LIST_H
#define LIST_H

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "CompareAge.h"
#include "CompareBehaviour.h"
#include "CompareDate.h"

/*
 Class  :   Node
 Purpose:   This class template does helps to store the data of the Node
*/

template <class T> class Node {
public:
  T data;
  Node<T> *next;
  Node<T> *prev;
};

/*
 Class  :   List
 Purpose:   This class is used to store the data in the doubly linked list and
 as it is template class so we are making use of the behaviour classes to set
 the behaviour
*/
template <class T> class List {

  template <class M> friend ostream &operator<<(ostream &out, List<M> &l);

public:
  List();
  ~List(); // dealloc all nodes but not data
  bool add(T);
  virtual bool find(int, T *);
  void convertToArray(T *, int &);
  void cleanupData();
  void setCompBehv(CompareBehaviour<T> *c);
  int getSize();

private:
  int size;
  Node<T> *head;
  CompareBehaviour<T> *cmp;
};

template <class T> List<T>::List() {
  size = 0;
  head = NULL;
  cmp = NULL;
}

template <class T> List<T>::~List() {
  delete cmp;
  Node<T> *temp = head;
  while (temp != NULL) {
    Node<T> *temp1 = temp->next;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
    temp = temp1;
  }
}

template <class T> void List<T>::cleanupData() {
  Node<T> *temp = head;
  while (temp != NULL) {
    Node<T> *temp1 = temp->next;
    delete temp->data;
    temp = temp1;
  }
}

template <class T> void List<T>::setCompBehv(CompareBehaviour<T> *c) {
  cmp = c;
};

template <class T> void List<T>::convertToArray(T *arr, int &size) {

  int index = 0;
  Node<T> *temp = head;
  while (temp != NULL) {
    arr[index++] = (temp->data);
    temp = temp->next;
  }
  size = index;
}

template <class T> ostream &operator<<(ostream &out, List<T> &l) {

  out << "------FORWARD" << endl;

  Node<T> *temp = l.head;
  Node<T> *lastN = NULL;

  while (temp != NULL) {
    out << *(temp->data);
    if (temp->next == NULL) {
      lastN = temp;
    }
    temp = temp->next;
  }

  temp = lastN;
  out << endl << "------Backward" << endl;
  while (temp != NULL) {
    out << *(temp->data);
    temp = temp->prev;
  }
  out << endl << endl;
  return out;
}

template <class T> bool List<T>::add(T data) {
  Node<T> *newNode = new Node<T>;
  newNode->data = data;
  newNode->prev = NULL;
  newNode->next = NULL;

  Node<T> *temp = head;
  Node<T> *prev = NULL;

  while (temp != NULL) {

    if (cmp->compare((temp->data), data) == false) {
      break;
    }
    prev = temp;
    temp = temp->next;
  }

  if (prev == NULL) {
    head = newNode;
  } else {
    prev->next = newNode;
    newNode->prev = prev;
  }

  newNode->next = temp;

  if (temp != NULL) {
    temp->prev = newNode;
  }
  size++;
  return true;
}

template <class T> bool List<T>::find(int i, T *elm) {
  Node<T> *temp = head;

  while (temp != NULL) {
    if (temp->data->getId() == i) {
      *elm = (temp->data);
      return true;
    }
    temp = temp->next;
  }

  elm = NULL;
  return false;
}

template <class T> int List<T>::getSize() { return size; }
#endif