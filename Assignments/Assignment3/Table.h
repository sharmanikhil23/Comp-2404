#ifndef TABLE_H
#define TABLE_H

/*
 Class  :   Table
 Purpose:   This class helps to store the data related to the tables by making
an instance of it
*/
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