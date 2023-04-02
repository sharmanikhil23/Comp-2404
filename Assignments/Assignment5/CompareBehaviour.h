#ifndef COMPAREBEHAVIOUR_H
#define COMPAREBEHAVIOUR_H

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

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
