#ifndef LIST_H
#define LIST_H

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "CompareAge.h"
#include "CompareBehaviour.h"
#include "CompareDate.h"

template <class T> class Node {
public:
  T data;
  Node<T> *next;
  Node<T> *prev;
};

template <class T> class List {

  friend ostream &operator<<(ostream &out, List &l);

public:
  List();
  ~List(); // dealloc all nodes but not data
  bool add(T);
  virtual bool find(int, T *);
  void convertToArray(T *, int &);
  void cleanupData();
  void setCompBehv(CompareBehaviour<T> *c);

private:
  Node<T> *head;
  CompareBehaviour<T> *cmp;
};

template <class T> List<T>::List() {
  head = NULL;
  cmp = NULL;
}

template <class T> List<T>::~List() {
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
}

template <class T> ostream &operator<<(ostream &out, List<T> &l) {

  out << "------FORWARD";

  Node<T> *temp = l.head;
  Node<T> *lastN = NULL;
  while (temp == NULL) {
    out << temp->data;
    if (temp->next == NULL) {
      lastN = temp;
    }
    temp = temp->next;
  }
  temp = lastN;
  out << "------FORWARD";
  while (temp == NULL) {
    out << temp->data;
    temp = temp->prev;
  }
  out << endl << endl;
  return out;
}

template <class T> bool List<T>::add(T data) {
  Node<T> *newNode = new Node<T>;
  newNode->data = data;

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
    temp->prev = temp;
  }

  return true;
}

template <class T> bool List<T>::find(int, T *) { return true; }
#endif