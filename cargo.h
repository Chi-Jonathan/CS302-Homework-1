#ifndef CARGO_H
#define CARGO_H
#include <string>
#include <iostream>

class Cargo{
  std::string type;
  double weight;
  double totalWeight;
public:
  Cargo() = default;
  Cargo(std::string, double);
  double getWeight();
  void setWeight(double);
  Cargo operator+(const Cargo);
};


#endif