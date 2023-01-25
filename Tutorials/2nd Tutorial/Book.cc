#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"

Book::Book(int i, string t, string a, int y){
    id=i;
    title=t;
    author=a;
    year=y;
}


int Book::getId(){
    return id;
}

string Book::getTitle(){
    return title;
}

string Book::getAuthor(){
    return author;
}

int Book::getYear(){
    return year;
}

void Book::set(int i, string t, string a, int y){
    id=i;
    title=t;
    author=a;
    year=y;
}

void Book::print(){
    cout<<""<<setw(3)<<id<<"\t"<<setw(40)<<title<<"\t"<<setw(25)<<author<<"\t"<<year<<setw(4)<<endl;
}