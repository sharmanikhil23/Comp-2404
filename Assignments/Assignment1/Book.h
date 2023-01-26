#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
  public:
    Book(int=0,string="unknown",string="unknown",string="unknown", int=0);
    void    set(int, string, string, string, int);
    bool    compareYear(int&);
    bool    compareAuthor(Book&);
    int&    getId();
    int&    getYear();
    string& getTitle();
    string& getAuthorFN();
    string& getAuthorLN();
    void    print();

  private:
    int id;
    string title;
    string authorFN;
    string authorLN;
    int year;
};

#endif
