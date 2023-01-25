#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "Book.h"

using namespace std;
#define MAX_ARR_SIZE  128

class Library{

    public:
    Library();
    void addBook(Book&);
    void print();


    private:
    int nOfElements;
    Book data[MAX_ARR_SIZE];
    
    
};
#endif