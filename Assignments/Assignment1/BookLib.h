#ifndef BOOKLIB_H
#define BOOKLIB_H

#include <string>
#include "BookArray.h"
#include "defs.h"

using namespace std;

/*
   Class:   BookLib
 Purpose:   The class stores name of the library as well as instance of the BookArray Class which does store 
            all the books added to library according to orderType given
*/

class BookLib
{
    private:
        string name;
        BookArray book;

    public:
        BookLib(string="User",OrderType=ORDER_BY_AUTHOR);
        void add(int,string,string,string,int);
        Book& find(int id);
        //this print out the library name as well as all the books in the collection
        void print();
        void setLibInfo(string,OrderType);
};

#endif
