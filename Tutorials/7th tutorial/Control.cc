#include <iostream>
using namespace std;
#include <string>

#include "Control.h"

Control::Control() {}

void Control::initAnimal() {
  Animal *temp;
  // Chickens
  temp = new Chicken("Bradley Coop-er", 3, 10, 5);
  ag.add(temp);
  temp = new Chicken("Hen Solo", 5, 10, 2);
  ag.add(temp);
  temp = new Chicken("Cluck Vader", 1, 10, 1);
  ag.add(temp);
  temp = new Chicken("Big Bird", 2, 10, 1);
  ag.add(temp);
  temp = new Chicken("Hilary Fluff", 4, 10, 1);
  ag.add(temp);
  // Cow
  temp = new Cow("Bessie", 11, 20, "11:20");
  ag.add(temp);
  temp = new Cow("Dottie", 15, 20, "11:10");
  ag.add(temp);
  temp = new Cow("Magic", 6, 20, "11:00");
  ag.add(temp);
  temp = new Cow("Nellie", 7, 20, "15:00");
  ag.add(temp);
  temp = new Cow("Clarabelle", 1, 20, "15:10");
  ag.add(temp);

  // Chicken
  temp = new Pig("Doodle", 11, 10, 1);
  ag.add(temp);
  temp = new Pig("Squeaks", 15, 10, 2);
  ag.add(temp);
  temp = new Pig("Scooter", 6, 10, 1);
  ag.add(temp);
  temp = new Pig("Appetite", 7, 10, 3);
  ag.add(temp);
  temp = new Pig("Oswald", 1, 10, 1);
  ag.add(temp);
}

void Control::launch() {
  initAnimal();
  print();
}

void Control::print() const { ag.print(); }
