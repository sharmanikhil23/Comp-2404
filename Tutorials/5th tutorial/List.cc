#include <iostream>
using namespace std;
#include <string>

#include "List.h"

List::List() : head(NULL) {}

List::~List() {
  Node *currNode = head;
  Node *nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

void List::add(Animal *stu) {
  Node *tmpNode;
  Node *currNode;
  Node *prevNode;

  tmpNode = new Node;
  tmpNode->data = stu;
  tmpNode->next = NULL;

  prevNode = NULL;
  currNode = head;

  while (currNode != NULL) {
    if (tmpNode->data->getName() < currNode->data->getName()) {
      break;
    }
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
  } else {
    prevNode->next = tmpNode;
  }

  tmpNode->next = currNode;
}

void List::del(string name, Animal **stu) {
  Node *currNode;
  Node *prevNode;

  prevNode = NULL;
  currNode = head;

  while (currNode != NULL) {
    if (currNode->data->getName() == name) {
      break;
    }
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == NULL) {
    *stu = NULL;
    return;
  }

  if (prevNode == NULL) {
    head = currNode->next;
  } else {
    prevNode->next = currNode->next;
  }

  *stu = currNode->data;
  delete currNode;
}

void List::print() const {
  Node *currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}
