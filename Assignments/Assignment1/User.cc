#include <iostream>
#include <string>
using namespace std;

#include "User.h"
#include "IdArray.h"


 User::User(string n){
    name=n;
 }

void User::setUserInfo(string n,OrderType o){
    name=n;
    checkedOut.setOrder(o);
}
void User::addBook(int i,BookLib &master){
    checkedOut.add(i,master);
}
void User::printBooks(BookLib& master){
    cout<<name<<endl;
    checkedOut.print(master);
}