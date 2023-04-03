#include <iostream>
using namespace std;
#include <vector>

#include "Animal.h"

int main() {
  Bird *bird = new Bird("Bird");
  Chicken *chicken = new Chicken("Chicken");
  Cat *cat = new Cat("cat");
  Pig *pig = new Pig("pig");

  vector<Animal *> data;
  data.push_back(bird);
  data.push_back(chicken);
  data.push_back(cat);
  data.push_back(pig);

  cout << "Lets see the basic singing" << endl;
  bird->sing();
  chicken->sing();
  cat->sing();
  pig->sing();

  cout << "Lets see the polymorphism singing " << endl;
  for (int i = 0; i < data.size(); i++) {
    data[i]->sing();
  }

  cout << endl;
  cout << "Dance before fight" << endl;
  for (int i = 0; i < data.size(); i++) {
    data[i]->dance();
  }

  cat->spook(bird);

  cout << endl;
  cout << "Dance After fight" << endl;
  for (int i = 0; i < data.size(); i++) {
    data[i]->dance();
  }

  return 0;
}