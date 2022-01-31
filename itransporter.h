#ifndef ITRANSPORTERS_H
#define ITRANSPORTERS_H

template<class T>
class ITransporter{
public:
  virtual void load(T) = 0;
  virtual void unload() = 0;
  virtual void empty() = 0;
  virtual void move() = 0;
  virtual void report() = 0;
  virtual int getNumberItems() = 0;
  virtual void isEmpty() = 0;
  virtual ~ITransporter() = default;
};

#endif