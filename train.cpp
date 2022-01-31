#include <iostream>

template<class T>
Train<T>::Train(){}

template<class T>
void Train<T>::move(){
  std::cout<<"The destination has been reached"<<std::endl;
}

template<class T>
void Train<T>::load(T item){
  contents.push_back(item);
}

template<class T>
void Train<T>::unload(){
  contents.pop_back();
}

template<class T>
void Train<T>::empty(){
  contents.clear();
}

template<class T>
int Train<T>::getNumberItems(){
  return contents.size();
}

template<class T>
void Train<T>::isEmpty(){
  if(contents.size() == 0){
    std::cout<<"The train is empty." <<std::endl;
  }else{
    std::cout<<"The train is has cargo." <<std::endl;
  }
}

template<class T>
void Train<T>::report(){
  int count = contents.size();
  double totalWeight = 0;
  T temp;
  for(int i = 0; i<count; i++){
    temp = temp + contents.at(i);
  }
  std::cout<<"The total weight of cargo is: " << temp.getWeight() << std::endl;
  temp.setWeight(0);
}



