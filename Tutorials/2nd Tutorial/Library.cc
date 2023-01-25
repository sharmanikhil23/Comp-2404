#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"
#include "Library.h"

Library::Library(){
    nOfElements=0;
}

void Library::addBook(Book& bookData){
    data[nOfElements].set(bookData.getId(),bookData.getTitle(),bookData.getAuthor(),bookData.getYear());
    nOfElements++;
}

void Library::print(){
     cout << endl << endl << "LIBRARY:" << endl;
    for(int i=0;i<nOfElements;i++){
        data[i].print();
    }
}