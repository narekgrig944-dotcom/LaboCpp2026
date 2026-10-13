#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
#include <string>
#include "Schedulable.h"

class Classroom : public Schedulable
{
private:
  std::string name;
  int         seatingCapacity;

public:
  Classroom();
  Classroom(int i, const std::string& n, int capacity);
  Classroom(const Classroom& c);
  virtual ~Classroom();

  void setName(const std::string& n);
  void setSeatingCapacity(int capacity);
  std::string getName() const;
  int getSeatingCapacity() const;

  virtual std::string toString() const;
  virtual std::string tuple() const;

  Classroom& operator=(const Classroom& c);
};

std::ostream& operator<<(std::ostream& os, const Classroom& c);

#endif