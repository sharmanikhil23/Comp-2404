#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
#include <string>

#include "Runner.cc"

class Stack {

private:
  Runner *elements;
  int size;

public:
  Stack() {
    elements = new Runner[128];
    size = 0;
  };
  ~Stack();

  void PushFrount(Runner *r) {
    if (size == 128) {
      delete r;
      return;
    }

    for (int i = size; i > 0; i--) {
      elements[i] = elements[i - 1];
    }

    elements[0] = r;
    size++;
  }

  void popFrount(Runner *) {}

  void findByAge(int a, Stack &st) {
    for (int i = 0; i < size; i++) {
      if ((elements[i]->getAge()) > a) {
        st.PushFrount(elements[i]);
      }
    }
  }
};

#endif