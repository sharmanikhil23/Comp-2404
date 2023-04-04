#include <iostream>
using namespace std;
#include <string>

#include "View.h"

void View::showMenu(int &choice) {
  int numOptions = 5;

  cout << endl << endl;
  cout << "What would you like to do:" << endl;
  cout << "  (1) Print all clinic data" << endl;
  cout << "  (2) Print animals" << endl;
  cout << "  (3) Print customers" << endl;
  cout << "  (4) Print schedule" << endl;
  cout << "  (5) Create appointment" << endl;

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

void View::createAppointment(int &i, int &y, int &m, int &d, int &h, int &min) {

  cout << endl << "Please Enter the Animal Id: ";
  readInt(i);
  cout << endl << "Please Enter the Appintment year: ";
  readInt(y);
  cout << endl << "Please Enter the Appintment month: ";
  readInt(m);
  cout << endl << "Please Enter the Appintment day: ";
  readInt(d);
  cout << endl << "Please Enter the Appintment hour: ";
  readInt(h);
  cout << endl << "Please Enter the Appintment minute: ";
  readInt(min);
}

void View::printStr(string str) { cout << str; }

void View::readInt(int &n) { cin >> n; }

void View::readStr(string &str) { cin >> str; }
