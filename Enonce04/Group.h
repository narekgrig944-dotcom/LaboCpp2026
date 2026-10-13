#ifndef GROUP_H
#define GROUP_H

#include <iostream>
#include <string>
#include "Schedulable.h"

class Group : public Schedulable
{
private:
  std::string name;

public:
  Group();
  Group(int i, const std::string& n);
  Group(const Group& g);
  virtual ~Group();

  void setName(const std::string& n);
  std::string getName() const;

  virtual std::string toString() const;
  virtual std::string tuple() const;

  Group& operator=(const Group& g);
};

std::ostream& operator<<(std::ostream& os, const Group& g);

#endif