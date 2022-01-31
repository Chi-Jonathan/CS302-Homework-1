#ifndef BUS_H
#define BUS_H
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "people.h"
#include "itransporter.h"

template <class T>
class Bus: public ITransporter<T>{
  std::vector<T> peeps; 
  double fare = 0;
public:
  Bus();
  void move() override;
  void load(T person) override;
  void unload() override;
  void empty() override;
  void report() override;
  int getNumberItems() override;
  void isEmpty() override;
  void setFare(double);
};

#include"bus.cpp"

#endif