#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <string>
#include "Schedulable.h"

class Professor : public Schedulable
{
private:
  std::string lastName;
  std::string firstName;

public:
  Professor();
  Professor(int i, const std::string& ln, const std::string& fn);
  Professor(const Professor& p);
  virtual ~Professor();

  void setLastName(const std::string& ln);
  void setFirstName(const std::string& fn);
  std::string getLastName() const;
  std::string getFirstName() const;

  virtual std::string toString() const;
  virtual std::string tuple() const;

  Professor& operator=(const Professor& p);
};

std::ostream& operator<<(std::ostream& os, const Professor& p);

#endif