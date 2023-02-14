#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Date.h"

Date::Date(int d, int m, int y)
{
  day=d;
  month=m;
  year=y;
  cout<<"Constructor Called"<<cout;
}

Date::~Date()
{
  cout<<"-- Date dtor: ";
}

bool Date::validate(int d, int m, int y){

  int lastDay=lastDayInMonth(m);

  if(m>12 || m<0){
    return false;
  }
  else if(d>lastDay){
    return false;
  }else{
    return true;
  }
}

bool Date::equals(Date *d){
  if(d->day ==day && d->month==month && d->year==year){
    return true;
  }else{
    return false;
  }
}

bool lessThan(Date *d){
  if(d->day <day){
    return true;
  }else if(d->day == day){
    if(d->month< month){
      return true;
    }else if(d->month == month){
      if(d->year <year){
        return true;
      }else{
        return false;
      }
    }else{
      return false;
    }
  }else{
    return false;
  }

}

int Date::lastDayInMonth(int month)
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}


void Date::print(){
  cout<<day<<"-"<<month<<"-"<<year<<endl;
}



