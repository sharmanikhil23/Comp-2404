#include <iostream>
using namespace std;

#include "Movie.h"

Movie::Movie(string t, int y)
{
  title = t;
  year  = y;
}

Movie::Movie(Movie& t){
   title=t.title;
   year=t.year;
}

Movie::~Movie() { }

int  Movie::getYear() { return year; }

void Movie::print()
{
  cout<<"** Year:  " << year << "   Title: " << title << endl;
}

