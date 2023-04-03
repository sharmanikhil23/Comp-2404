#include <iostream>
using namespace std;

#include "Animal.h"

// All Constructors
Animal::Animal(string n) : name(n) {}
Bird::Bird(string n) : Animal(n) { danceb = new BirdDance; }
Chicken::Chicken(string n) : Bird(n) { danceb = new ChickenDance; }
Cat::Cat(string n) : Animal(n) { danceb = new CatDance; }
Pig::Pig(string n) : Animal(n) { danceb = new PigDance; }

void Animal::sing() { cout << "Animal Singing" << endl; }
void Bird::sing() { cout << "Bird Singing Tweek Tweek" << endl; }
void Chicken::sing() { cout << "Chicken Sing kweek Kweek" << endl; }
void Cat::sing() { cout << "Cat sing Mew Mew" << endl; }
void Pig::sing() { cout << "Pig sing Pig Pig" << endl; }

void Bird::dance() { danceb->dance(); }
void Chicken::dance() { danceb->dance(); }
void Cat::dance() { danceb->dance(); }
void Pig::dance() { danceb->dance(); }

void Cat::spook(Animal *a) { a->replaceDanceB(new CantDance); }

void Animal::replaceDanceB(DanceBehaviour *b) {
  delete danceb;
  danceb = b;
}