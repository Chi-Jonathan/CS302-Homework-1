#ifndef TRAIN_H
#define TRAIN_H
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "itransporter.h"

template<class T>
class Train: public ITransporter<T>{
  std::vector<T> contents; 
public:
  Train();
  void move() override;
  void load(T item) override;
  void unload() override;
  void empty() override;
  void report() override;
  int getNumberItems() override;
  void isEmpty() override;
};
#include "train.cpp"

#endif