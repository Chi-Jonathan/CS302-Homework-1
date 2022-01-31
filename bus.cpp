#include <iostream>

template <class T>

Bus<T>::Bus(){}

template <class T>
void Bus<T>::move(){
  std::cout<<"We're at the next stop!"<<std::endl;
}

template <class T>
void Bus<T>::load(T person){
  int count = peeps.size();
    for(int i = 0; i<count; i++){
      if(peeps.at(i)>person){
        peeps.insert(peeps.begin()+i, person);
        return;
      }
    }
    peeps.push_back(person);
}

template <class T>
void Bus<T>::unload(){
  peeps.pop_back();
}

template <class T>
void Bus<T>::empty(){
  peeps.clear();
}

template <class T>
int Bus<T>::getNumberItems(){
  return peeps.size();
}

template <class T>
void Bus<T>::isEmpty(){
  if(peeps.size() == 0){
    std::cout<<"The bus is empty." <<std::endl;
  }else{
    std::cout<<"The bus is has cargo." <<std::endl;
  }
}

template <class T>
void Bus<T>::report(){
  int count = peeps.size();
  double temp1;
  T temp2;
  std::cout<<"The total fare is " << (peeps.size()*fare) << std::endl;
}

template <class T>
void Bus<T>::setFare(double newFare){
  fare = newFare;
}



