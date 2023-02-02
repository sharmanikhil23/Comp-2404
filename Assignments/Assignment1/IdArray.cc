#include <iostream>
#include <string>
using namespace std;

#include "IdArray.h"
#include "BookLib.h"
#include "Book.h"

IdArray::IdArray(int i,OrderType o){
  nOfBooks=i;
  orderType=o;
}

void IdArray::setOrder(OrderType order){
  orderType=order;
}

void IdArray::print(BookLib &book){
  for(int i=0;i<nOfBooks;i++){
    Book temp=book.find(books[i]);
    temp.print();
  }
    cout<<endl<<endl<<endl;
}

void IdArray::add(int id, BookLib &masterLib){

  Book temp=masterLib.find(id);
  int indexToInsert=0;
  bool flag=false;

  if(orderType==ORDER_BY_YEAR){
    for(int i=0;i<nOfBooks;i++){
      if((masterLib.find(books[i])).compareYear(temp.getYear())==false){
        indexToInsert=i;
        flag=true;
        break;
      }
    }
  }else{
    for(int i=0;i<nOfBooks;i++){
      if(masterLib.find(books[i]).compareAuthor(temp)==false){
        indexToInsert=i;
        flag=true;
        break;
      }
    }
  }

  if(flag){
    for(int i=nOfBooks;i>indexToInsert;i--){
      books[i]=books[i-1];
    }
    books[indexToInsert]=id;
  }else{
    books[nOfBooks]=id;
  }
  nOfBooks++;
}
