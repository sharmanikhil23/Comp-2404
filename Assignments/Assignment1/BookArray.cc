#include <iostream>
#include <string>
using namespace std;

#include "BookArray.h"
#include "defs.h"


BookArray::BookArray(int nOfElm, OrderType i){
    nOfBooks=nOfElm;
    orderType=i;
}

void BookArray::setOrder(OrderType i){
     orderType=i;
}

void BookArray::add(int i, string t, string f, string l, int y){

    //first finding the insertion point 
    int indexToInsert=0;
    bool flag=false;

    if(orderType == ORDER_BY_YEAR){
        for(int i=0;i<nOfBooks;i++){
            if(books[i].compareYear(y)==false){
                indexToInsert=i;
                flag=true;
                break;
            }
        }
    }else{
        Book temp(i,t,f,l,y);
        for(int i=0;i<nOfBooks;i++){
            if(books[i].compareAuthor(temp)==false){
                indexToInsert=i;
                flag=true;
                break;
            }
        }
    }
    
   if(flag){
    for(int i=nOfBooks;i>indexToInsert;i--){
        books[i].set(books[i-1].getId(),books[i-1].getTitle(),books[i-1].getAuthorFN(),books[i-1].getAuthorLN(),books[i-1].getYear());
    }

    books[indexToInsert].set(i,t,f,l,y);
   }else{
    books[nOfBooks].set(i,t,f,l,y);
   }
    nOfBooks++;


   
}

Book& BookArray::find(int id){
    for(int i=0;i<nOfBooks;i++){
        if(books[i].getId()==id){
            return books[i];
        }
    }
     exit(1);
}

void BookArray::print(){
    for(int i=0;i<nOfBooks;i++){
        books[i].print();
    }
}