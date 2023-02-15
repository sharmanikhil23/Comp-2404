#ifndef CONTROL_H
#define CONTROL_H

#include "Restaurant.h"
#include "PatronArray.h"
#include "View.h"

/*
 Class  :   Control
 Purpose:   This is the control class which initially create an object of the Restaurant Class in heap then 
            initilize it with patrons as well as booking and control the entire program

Critical Functions:
 launch :    Lauch will control the entire program by initilizing and performing the different operations as
             requested by the user 

*/

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
