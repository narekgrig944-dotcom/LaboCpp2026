#include <iostream>
#include "Classroom.h"
using namespace std;

Classroom::Classroom() : Schedulable()
{
  cout << ">>> Constructeur par defaut Classroom <<<" << endl;
  seatingCapacity = 0;
}

Classroom::Classroom(int i, const string& n, int capacity) : Schedulable(i), name(n)
{
  cout << ">>> Constructeur d'initialisation Classroom <<<" << endl;
  seatingCapacity = capacity;
}

Classroom::Classroom(const Classroom& c) : Schedulable(c), name(c.name)
{
  cout << ">>> Constructeur de copie Classroom <<<" << endl;
  seatingCapacity = c.seatingCapacity;
}

Classroom::~Classroom()
{
  cout << ">>> Destructeur Classroom <<<" << endl;
}

void Classroom::setName(const string& n)         { name = n; }
void Classroom::setSeatingCapacity(int capacity) { seatingCapacity = capacity; }
string Classroom::getName() const                { return name; }
int Classroom::getSeatingCapacity() const        { return seatingCapacity; }

string Classroom::toString() const
{
  return name + " (" + to_string(seatingCapacity) + ")";
}

string Classroom::tuple() const
{
  return to_string(getId()) + ";" + toString();
}

Classroom& Classroom::operator=(const Classroom& c)
{
  Schedulable::operator=(c);
  name = c.name;
  seatingCapacity = c.seatingCapacity;
  return *this;
}

ostream& operator<<(ostream& os, const Classroom& c)
{
  os << c.toString();
  return os;
}