#include "people.h"

People::People(std::string name, double height):name(name), height(height){}

double People::getHeight(){
  return height;
}

bool People::operator>(const People person){
  if(height > person.height){
    return true;
  }
  return false;
}

bool People::operator==(const People person){
  if(height == person.height){
    return true;
  }
  return false;
}