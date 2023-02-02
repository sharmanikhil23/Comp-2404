#ifndef IDARRAY_H
#define IDARRAY_H

#include <string>
#include "defs.h"

using namespace std;

/*
   Class:   IdArray
 Purpose:   The class keep track of all the books which are being checked out by the user by the BookId
*/
class IdArray
{
  private:
    int books[MAX_ARR_SIZE];
    int nOfBooks;
    OrderType orderType;

  public:
    IdArray(int=0,OrderType=ORDER_BY_YEAR);
    void setOrder(OrderType);
    void add(int, BookLib&);
    void print(BookLib&);

};

#endif
