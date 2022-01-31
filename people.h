#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include <iostream>

class People{
  std::string name;
  double height;
  public:
  People() = default;
  People(std::string, double);
  double getHeight();
  bool operator>(const People);
  bool operator==(const People);
};


#endif