#ifndef USER_H
#define USER_H

#include <string>
#include "defs.h"
#include "IdArray.h"

using namespace std;

/*
   Class:   User
 Purpose:   The purpose of this class is to User for library and keep the track of the books user have from  
            library with the help of IdArray class
    
*/
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
