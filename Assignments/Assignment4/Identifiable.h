#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

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