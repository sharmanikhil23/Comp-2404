#include <iostream>
using namespace std;
#include <string>


void Control::initReservations(Restaurant* r)
{
  r->reserveTable(100,   4, 2023,  2,  3, 14, 30);
  r->reserveTable(5002,  4, 2023, 14,  3, 14, 30);
  r->reserveTable(5002,  4, 2023,  2, 30, 14, 30);

  r->reserveTable(5001,  2, 2023, 2, 14, 17, 30);
  r->reserveTable(5005,  5, 2023, 2, 14, 19, 0);
  r->reserveTable(5002,  3, 2023, 2, 14, 19, 0);
  r->reserveTable(5003,  4, 2023, 2, 14, 19, 0);
  r->reserveTable(5004,  7, 2023, 2, 14, 19, 0);

  r->reserveTable(5006,  2, 2023, 2, 14, 19, 30);
  r->reserveTable(5006,  8, 2023, 2, 14, 18, 30);
  r->reserveTable(5006, 10, 2023, 2, 14, 18, 30);
  r->reserveTable(5001,  8, 2023, 2, 14, 20, 30);
  r->reserveTable(5004,  6, 2023, 2, 14, 20, 0);
  r->reserveTable(5002,  3, 2023, 2, 14, 21, 0);

  r->reserveTable(5004,  3, 2023, 2, 11, 20, 45);
  r->reserveTable(5003,  5, 2023, 2, 11, 19, 45);
  r->reserveTable(5006,  6, 2023, 2, 11, 18, 0);
  r->reserveTable(5004,  4, 2023, 2, 11, 20, 0);
  r->reserveTable(5004,  7, 2023, 2, 11, 20, 15);
  r->reserveTable(5003,  6, 2023, 2, 11, 20, 15);
  r->reserveTable(5004, 10, 2023, 2, 11, 21, 0);
  r->reserveTable(5001,  8, 2023, 2, 11, 20, 30);
  r->reserveTable(5001,  9, 2023, 2, 11, 19, 15);
  r->reserveTable(5006,  2, 2023, 2, 11, 19, 15);
  r->reserveTable(5001, 10, 2023, 2, 11, 19, 0);

}

void Control::initPatrons(Restaurant* r)
{
  r->addPatron(new Patron("Juliet"));
  r->addPatron(new Patron("Sayid"));
  r->addPatron(new Patron("Jack"));
  r->addPatron(new Patron("Kate"));
  r->addPatron(new Patron("James"));
  r->addPatron(new Patron("Hugo"));
}

