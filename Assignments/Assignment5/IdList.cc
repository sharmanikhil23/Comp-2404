#include <iostream>
using namespace std;
#include <string>

#include "IdList.h"

IdList::IdList(bool a) : Collection(a) {
  head = NULL;
  size = 0;
}

bool IdList::getAsc() { return Collection::asc; }

IdList::~IdList() {
  Node *temp = head;
  while (temp != NULL) {
    Node *temp1 = temp->next;
    temp->data = NULL;
    delete temp;
    temp = temp1;
  }
}

void IdList::cleanupData() {
  Node *temp = head;
  while (temp != NULL) {
    Node *temp1 = temp->next;
    delete temp->data;
    temp = temp1;
  }
}

bool IdList::add(Identifiable *obj) {
  bool asc = Collection::asc;
  Node *current = head;
  Node *prev = NULL;
  Node *tempData = new Node();

  tempData->data = obj;

  while (current != NULL) {
    if (asc) {
      if (current->data->getCompValue() > obj->getCompValue()) {
        break;
      }
    } else {
      if (current->data->getCompValue() < obj->getCompValue()) {
        break;
      }
    }

    prev = current;
    current = current->next;
  }

  if (prev == NULL) {
    head = tempData;
  } else {
    prev->next = tempData;
  }

  tempData->next = current;
  size++;
  return true;
}

bool IdList::find(int id, Identifiable **foundObj) {
  Node *temp = head;
  while (temp != NULL) {
    if (temp->data->getId() == id) {
      *foundObj = temp->data;
      return true;
    }
    temp = temp->next;
  }

  foundObj = NULL;
  return false;
}

void IdList::print() {
  Node *temp = head;
  while (temp != NULL) {
    // cout << *(temp->data);
    temp->data->print();
    temp = temp->next;
  }
}

int IdList::getSize() { return size; }
