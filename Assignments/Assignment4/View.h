#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
using namespace std;

/*
 Class  :   View
 Purpose:   This class helps to keep track of the Views for the user
*/
class View {
public:
  ~View();
  void showMenu(int &);
  void printStr(string);
  void readInt(int &);
  void readStr(string &);
};

#endif
