#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
#include "Book.h"

Book::Book(int i,string t,string f,string l, int y){
    id=i;
    year=y;
    authorFN=f;
    authorLN=l;
    title=t;
}

int& Book::getId(){
    return id;
}
int& Book::getYear(){
    return year;
}
string& Book::getTitle(){
    return title;
}
string& Book::getAuthorFN(){
    return authorFN;
}
string& Book::getAuthorLN(){
    return authorLN;
}

void Book::set(int i, string t, string f, string l, int y){
    id=i;
    year=y;
    authorFN=f;
    authorLN=l;
    title=t;
}

bool Book::compareYear(int& y){
    return (year<y) ?true:false;
}

bool Book::compareAuthor(Book& b){
    if(authorLN<b.authorLN){
        return true;
    }else if(authorLN==b.authorLN){
        if(authorFN<b.authorFN){
            return true;
        }else if(authorFN==b.authorFN){
            return (title<b.title)?true:false;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

void Book::print(){
    cout<<left<<setw(4)<<id<<" : "<<setw(4)<<year<<" : "<<setw(40)<<title<<" : "<<authorLN<<", "<<authorFN<<endl;
}


