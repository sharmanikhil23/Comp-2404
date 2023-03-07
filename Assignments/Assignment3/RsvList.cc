#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "RsvList.h"
#include "defs.h"

RsvList::RsvList() { head = NULL; }

RsvList::~RsvList() {
  Node *temp = head;
  while (temp != NULL) {
    delete temp->r;
    Node *temp1 = temp->next;
    delete temp;
    temp = temp1;
  }
}

void RsvList::add(Reservation *r) {

  Node *tempNode = new Node;
  tempNode->r = r;

  Node *current = head;
  Node *prev = NULL;

  while (current != NULL) {
    if (current->r->lessThan(r) == false) {
      break;
    }
    prev = current;
    current = current->next;
  }
  if (prev == NULL) {
    head = tempNode;
  } else {
    prev->next = tempNode;
  }
  tempNode->next = current;
}

void RsvList::convertToArray(Reservation **arr, int &size) {
  Node *temp = head;
  int i = 0;
  while (temp != NULL) {
    arr[i] = temp->r;
    temp = temp->next;
    i++;
  }
  size = i;
}

void RsvList::print() {
  Node *temp = head;
  int i = 0;
  while (temp != NULL) {
    temp->r->print();
    temp = temp->next;
  }
}