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
public:
  Time(int = 0, int = 0);
  Time(Time *);
  void print();
  void add(int, int);
  bool overlaps(Time *, Time *);
  bool lessThan(Time *);
  static bool validate(int, int);
  bool equals(Time *);

private:
  int hours;
  int minutes;
  void setTime(int, int);
  int convertToMins();
};

#endif
