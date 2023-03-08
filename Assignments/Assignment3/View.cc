#include <iostream>
using namespace std;
#include <string>

#include "View.h"

void View::showMenu(int &choice) {
  int numOptions = 2;

  cout << endl << endl;
  cout << "What would you like to do:" << endl;
  cout << "  (1) Print reservation schedule" << endl;
  cout << "  (2) Reserve a table" << endl;
  cout << "  (0) Exit" << endl << endl;

  cout << "Enter your selection: ";
  cin >> choice;
  if (choice == 0)
    return;

  while (choice < 0 || choice > numOptions) {
    cout << "Enter your selection: ";
    cin >> choice;
  }
}

void View::printStr(string str) { cout << str; }

void View::readInt(int &n) { cin >> n; }

void View::readStr(string &str) { cin >> str; }

void View::addRes(string &name, int &cap, int &y, int &m, int &d, int &hour,
                  int &minutes) {
  cout << "Please Enter patron name ";
  cin >> name;
  cout << endl;

  cout << "Please Enter the required table capacity ";
  cin >> cap;
  cout << endl;

  cout << "Please Enter the year, month and day ";
  cin >> y >> m >> d;
  cout << endl;

  cout << "Please Enter the hour and minutes ";
  cin >> hour >> minutes;
  cout << endl;
}
