#include <iostream>
#include <string>
using namespace std;

#include "BookLib.h"
#include "BookArray.h"

BookLib::BookLib(string user,OrderType order){
     name=user;
     order=order;
}

void BookLib::add(int i,string t,string f,string l,int y){
    book.add(i,t,f,l,y);
}

Book& BookLib::find(int id){
    return book.find(id);
}

void BookLib::print(){
    cout<<name<<":"<<endl;
    book.print();
}
void BookLib::setLibInfo(string user,OrderType o){
     name=user;
    book.setOrder(o);
}

