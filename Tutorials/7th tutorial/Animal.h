#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
  Animal(string = "Fluffy", int = 0, float = 0);
  ~Animal();
  string getName() const;
  virtual void print() const;
  int getAge() const;

protected:
  float lifespan;

private:
  string name;
  int age;
};

#endif
