#ifndef IDARRAY_H
#define IDARRAY_H

#include <string>
#include "defs.h"

using namespace std;

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
        void print(BookLib &);

};

#endif
