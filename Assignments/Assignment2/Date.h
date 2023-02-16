#ifndef DATE_H
#define DATE_H


/*
 Class  :   Date
 Purpose:   This class helps us to keep track of the dates for the restaurant

Critical Functions:
validate:    It is the static member function can be run from anywhere with just the class name

*/
class Date
{
  public:
    Date(int=0, int=0, int=2000);
    ~Date();
    static bool validate(int, int, int);
    bool lessThan(Date *);
    bool equals(Date *);
    void print();

  private:
    int day;
    int month;
    int year;
    static int  lastDayInMonth(int,int);
    static bool leapYear(int);
};

#endif
