#ifndef BOOKLIB_H
#define BOOKLIB_H

#include <string>
#include "BookArray.h"
#include "defs.h"


using namespace std;

class BookLib
{
    private:
        string name;
        BookArray book;

    public:
        BookLib(string="User",OrderType=ORDER_BY_AUTHOR);
        void add(int,string,string,string,int);
        Book& find(int id);
        void print();
        void setLibInfo(string,OrderType);
};

#endif
