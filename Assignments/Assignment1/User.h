#ifndef USER_H
#define USER_H

#include <string>
#include "defs.h"
#include "IdArray.h"

using namespace std;

class User
{
    private:
        string name;
        IdArray checkedOut;
    
    public:
        User(string="user");
        void setUserInfo(string,OrderType);
        void addBook(int,BookLib&);
        void printBooks(BookLib&);
       
};

#endif
