#ifndef COMPAREAGE_H
#define COMPAREAGE_H

#include "CompareBehaviour.h"

/*
Class  :  CompareAge
Purpose:  This is derived behaviour class derived from the CompareBehaviour
class and this class is used to compare the age behaviour
*/
template <class T> class CompareAge : public CompareBehaviour<T> {

public:
  CompareAge(bool);
  virtual ~CompareAge();
  virtual bool compare(T, T);
};

template <class T> CompareAge<T>::CompareAge(bool a) : CompareBehaviour<T>(a) {}

template <class T> CompareAge<T>::~CompareAge() {}

template <class T> bool CompareAge<T>::compare(T t1, T t2) {
  if (CompareBehaviour<T>::asc == true) {
    return t1->getAnimalAge() < t2->getAnimalAge() ? true : false;
  } else {
    return t1->getAnimalAge() > t2->getAnimalAge() ? true : false;
  }
}

#endif