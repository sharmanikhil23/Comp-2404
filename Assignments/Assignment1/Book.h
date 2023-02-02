#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;
/*
   Class:   Book
 Purpose:   The class is used to make an instace of the Book, with each instace we can store basic details
            of the book like name of the author, year of publication, title, and book Id
*/
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
