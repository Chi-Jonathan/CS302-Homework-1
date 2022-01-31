#include "cargo.h"

Cargo::Cargo(std::string type, double weight):type(type), weight(weight){}

double Cargo::getWeight(){
  return weight;
}

Cargo Cargo::operator+(const Cargo item){
  Cargo addedItem;
  addedItem.weight = weight + item.weight;
  return addedItem; 
}

void Cargo::setWeight(double newWeight){
  weight = newWeight;
}