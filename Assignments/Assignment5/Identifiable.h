#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

/*
Class  :  Identifiable
Purpose:  This is abstract class and the base class for the Animals and
Customers

*/

class Identifiable {
protected:
  int id;

public:
  Identifiable(int &);
  virtual ~Identifiable();
  virtual int getCompValue() = 0;
  virtual void print() = 0;
  int getId();
};

#endif