#ifndef CHICKEN_H
#define CHICKEN_H

#include "Animal.h"

class Chicken : public Animal
{
  public:
    Chicken(string="Little Red Hen", int=0, float=0, int=0);
    ~Chicken();
    void print() const;

  private:
   int eggCount;

};


#endif
