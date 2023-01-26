#ifndef BOOKARRAY_H
#define BOOKARRAY_H

#include <string>
#include "defs.h"
#include "Book.h"

using namespace std;

class BookArray
{
    private:
        Book books[MAX_ARR_SIZE];
        int nOfBooks;
        OrderType orderType;

    public:
        BookArray(int=0,OrderType=ORDER_BY_AUTHOR);
        void setOrder(OrderType);
        void add(int,string,string,string,int);
        Book& find(int);
        void print();

};

#endif
