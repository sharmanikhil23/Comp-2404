#ifndef COMPAREDATE_H
#define COMPAREDATE_H

#include "CompareBehaviour.h"

template <class T> class CompareDate : public CompareBehaviour<T> {

public:
  CompareDate(bool);
  virtual ~CompareDate();
  virtual bool compare(T, T);
};

template <class T>
CompareDate<T>::CompareDate(bool a) : CompareBehaviour<T>(a) {}

template <class T> CompareDate<T>::~CompareDate() {}

template <class T> bool CompareDate<T>::compare(T t1, T t2) { return true; }
#endif