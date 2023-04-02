#ifndef COMPAREAGE_H
#define COMPAREAGE_H

#include "CompareBehaviour.h"

template <class T> class CompareAge : public CompareBehaviour<T> {

public:
  CompareAge(bool);
  virtual ~CompareAge();
  virtual bool compare(T, T);
};

template <class T> CompareAge<T>::CompareAge(bool a) : CompareBehaviour<T>(a) {}

template <class T> CompareAge<T>::~CompareAge() {}

template <class T> bool CompareAge<T>::compare(T t1, T t2) { return true; }

#endif