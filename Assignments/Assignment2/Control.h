#ifndef CONTROL_H
#define CONTROL_H

#include "Restaurant.h"
#include "PatronArray.h"
#include "View.h"

class Control
{
    private:
      Restaurant *r;
      void initPatrons(Restaurant *r);
      void initReservations(Restaurant *r);

    public:
      Control();
      ~Control();
      void launch();

};

#endif
