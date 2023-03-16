#include <iostream>
using namespace std;
#include <string>

#include "IdList.h"

IdList::IdList(bool a) : Collection(a), head(NULL) {}

IdList::~IdList() { cleanupData(); }

void IdList::cleanupData() {
  Node *temp = head;
  while (temp != NULL) {
    Node *temp1 = temp->next;
    delete temp->data;
    delete temp;
    temp = temp1;
  }
}

bool IdList::add(Identifiable *obj) {
  bool asc = Collection::asc;
  bool flag = false;
  Node *current = head;
  Node *prev = NULL;
  Node *tempData = new Node();

  tempData->data = obj;

  while (current != NULL) {
    if (asc) {
      if (current->data->getCompValue() > obj->getCompValue()) {
        flag = true;
        break;
      }
    } else {
      if (current->data->getCompValue() > obj->getCompValue()) {
        flag = true;
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
    if (temp->data->getCompValue() == id) {
      *foundObj = temp->data;
      return true;
    }
  }
  foundObj = NULL;
  return false;
}

void IdList::print() { cout << "Printing from IdList class" << endl; }

int IdList::getSize() { return size; }