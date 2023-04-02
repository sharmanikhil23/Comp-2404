#ifndef TIME_H
#define TIME_H

/*
 Class  :   Time
 Purpose:   This class helps to keep track of the time according to the
 reservation

 Critical Functions:
validate:    Helps in validating the time and as it static it can be called just
by the class name
*/
class Time {

  friend ostream &operator<<(ostream &, Time &);

public:
  Time(int = 0, int = 0);
  Time(Time *);
  bool operator<(Time &);
  bool operator>(Time &);
  bool operator==(Time &);
  void add(int, int);

private:
  int hours;
  int minutes;
  void setTime(int, int);
  int convertToMins();
};

#endif
