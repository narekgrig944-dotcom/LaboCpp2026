#include <iostream>
#include "Group.h"
using namespace std;

Group::Group() : Schedulable()
{
  cout << ">>> Constructeur par defaut Group <<<" << endl;
}

Group::Group(int i, const string& n) : Schedulable(i), name(n)
{
  cout << ">>> Constructeur d'initialisation Group <<<" << endl;
}

Group::Group(const Group& g) : Schedulable(g), name(g.name)
{
  cout << ">>> Constructeur de copie Group <<<" << endl;
}

Group::~Group()
{
  cout << ">>> Destructeur Group <<<" << endl;
}

void Group::setName(const string& n) { name = n; }
string Group::getName() const        { return name; }

string Group::toString() const
{
  return name;
}

string Group::tuple() const
{
  return to_string(getId()) + ";" + name;
}

Group& Group::operator=(const Group& g)
{
  Schedulable::operator=(g);
  name = g.name;
  return *this;
}

ostream& operator<<(ostream& os, const Group& g)
{
  os << g.toString();
  return os;
}