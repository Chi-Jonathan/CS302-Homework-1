
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include "cargo.h"
#include "people.h"
#include "train.h"
#include "bus.h"
#include "itransporter.h"

int main() {
  People joe("joe", 1);
  People bob("bob", 2);
  People rog("rog", 3);
  Bus<People> bus1;
  bus1.load(rog);
  bus1.load(bob);
  bus1.load(joe);
  bus1.setFare(2);
  std::cout<<bus1.getNumberItems()<<std::endl;
  bus1.report();
  bus1.move();
  bus1.unload();
  std::cout<<"numitems: " << bus1.getNumberItems()<<std::endl;
  bus1.report();
  Train<Cargo> train1;
  Cargo gold("gold", 4.5);
  Cargo copper("copper",3.3);
  Cargo iron("iron", 2.1);
  train1.load(gold);
  train1.load(copper);
  train1.load(iron);
  train1.report();
  train1.unload();
  train1.report();
}