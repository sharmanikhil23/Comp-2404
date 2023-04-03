#include <iostream>
using namespace std;

#include "DanceBehaviour.h"

void CantDance::dance() { cout << "Cannot Dance" << endl; }

void CatDance::dance() { cout << "Cat Dancing Mew Mew" << endl; }

void ChickenDance::dance() { cout << "Chicken dance Chick Chick" << endl; }

void PigDance::dance() { cout << "Pig dance piggy piggy" << endl; }

void BirdDance::dance() { cout << "Bird dance Bird Bird" << endl; }