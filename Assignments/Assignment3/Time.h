#ifndef TIME_H
#define TIME_H

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
