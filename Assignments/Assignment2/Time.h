#ifndef TIME_H
#define TIME_H


/*
 Class         :  Time
 Purpose       :  This class is used to keep track of Time of the reservation for restaurant
*/
class Time
{
  public:
    Time(int=0, int=0);
    static bool validate(int, int);
    bool lessThan(Time*);
    void print();

  private:
    int  hours;
    int  minutes;
    void setTime(int, int);
    int  convertToMins(int, int);
};

#endif
