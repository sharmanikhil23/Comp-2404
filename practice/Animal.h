#ifndef ANIMAL_H
#define ANIMAL_H

#include "DanceBehaviour.h"

class Animal {
private:
  string name;

protected:
  DanceBehaviour *danceb;

public:
  Animal(string n);
  virtual void dance() = 0;
  virtual void sing();
  void replaceDanceB(DanceBehaviour *);
};

class Bird : public Animal {
private:
public:
  Bird(string n);
  virtual void dance();
  virtual void sing();
};

class Chicken : public Bird {
private:
public:
  Chicken(string n);
  virtual void dance();
  virtual void sing();
};

class Cat : public Animal {
private:
public:
  Cat(string n);
  virtual void dance();
  virtual void sing();
  void spook(Animal *);
};

class Pig : public Animal {
private:
public:
  Pig(string n);
  virtual void dance();
  virtual void sing();
};

#endif