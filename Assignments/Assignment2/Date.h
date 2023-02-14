#ifndef DATE_H
#define DATE_H

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
