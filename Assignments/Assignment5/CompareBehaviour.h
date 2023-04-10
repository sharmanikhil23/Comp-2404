#ifndef COMPAREBEHAVIOUR_H
#define COMPAREBEHAVIOUR_H

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/*
Class  :  CompareBehaviour
Purpose:  This is the base behaviour class for the other comparison classes and
we are using the templates to define these classes

*/

template <class T> class CompareBehaviour {
public:
  CompareBehaviour(bool = true);
  virtual ~CompareBehaviour();
  virtual bool compare(T, T) = 0;

protected:
  bool asc; // true for asc else desc
};

template <class T> CompareBehaviour<T>::CompareBehaviour(bool a) { asc = a; }
template <class T> CompareBehaviour<T>::~CompareBehaviour() {}

#endif
