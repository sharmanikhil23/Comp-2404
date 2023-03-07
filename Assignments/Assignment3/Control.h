#ifndef CONTROL_H
#define CONTROL_H

#include "Restaurant.h"
#include "View.h"

class Control
{
  public:
    void launch();
    Control();
    ~Control();

  private:
    void initTables(Restaurant *);
    void initReservations(Restaurant *);
    Restaurant *restaurant;
    View view;

};

#endif
