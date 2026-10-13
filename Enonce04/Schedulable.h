#ifndef SCHEDULABLE_H
#define SCHEDULABLE_H

#include <string>

class Schedulable
{
private:
  int id;

public:
  Schedulable();
  Schedulable(int i);
  Schedulable(const Schedulable& s);
  virtual ~Schedulable();

  void setId(int i);
  int getId() const;

  virtual std::string toString() const = 0;
  virtual std::string tuple() const = 0;

  Schedulable& operator=(const Schedulable& s);
};

#endif