#ifndef TABLE_H
#define TABLE_H

class Table {
private:
  int number;
  int capacity;

public:
  Table(int, int);
  ~Table();
  int getTNumber();
  int getTCapacity();
};

#endif