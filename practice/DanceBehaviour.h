#ifndef DANCEBEHAVIOUR_H
#define DANCEBEHAVIOUR_H

class DanceBehaviour {
public:
  DanceBehaviour() {}
  virtual ~DanceBehaviour() {}
  virtual void dance() = 0;
};

class CantDance : public DanceBehaviour {
public:
  void dance();
  virtual ~CantDance() {}
  CantDance() {}
};

class ChickenDance : public DanceBehaviour {
public:
  void dance();
  virtual ~ChickenDance() {}
  ChickenDance() {}
};

class BirdDance : public DanceBehaviour {
public:
  void dance();
  virtual ~BirdDance() {}
  BirdDance() {}
};

class CatDance : public DanceBehaviour {
public:
  void dance();
  virtual ~CatDance() {}
  CatDance() {}
};

class PigDance : public DanceBehaviour {
public:
  void dance();
  virtual ~PigDance() {}
  PigDance() {}
};

#endif