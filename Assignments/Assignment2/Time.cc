#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Time.h"

Time::Time(int h, int m)
{
  setTime(h, m);
}

void Time::setTime(int h, int m)
{
  hours   = ( h >= 0 && h < 24) ? h : 0;
  minutes = ( m >= 0 && m < 60) ? m : 0;
}

int Time::convertToMins(int hours, int minutes) 
{
  return (hours*60 + minutes);
}

void Time::print() 
{
  cout<<setfill('0')<<setw(2)<<hours<<":"
      <<setfill('0')<<setw(2)<<minutes;
}

bool Time::validate(int h, int m){
  if(h >= 0 && h < 24 && m >= 0 && m < 60){
    return true;
  }else{
    return false;
  }
}

bool Time::lessThan(Time* t){
  if(convertToMins(t->hours,t->minutes) > convertToMins(hours,minutes)){
    return true;
  }else{
    return false;
  }
}

