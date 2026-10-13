#include <iostream>
#include "Professor.h"
using namespace std;

Professor::Professor() : Schedulable()
{
  cout << ">>> Constructeur par defaut Professor <<<" << endl;
}

Professor::Professor(int i, const string& ln, const string& fn) : Schedulable(i), lastName(ln), firstName(fn)
{
  cout << ">>> Constructeur d'initialisation Professor <<<" << endl;
}

Professor::Professor(const Professor& p) : Schedulable(p), lastName(p.lastName), firstName(p.firstName)
{
  cout << ">>> Constructeur de copie Professor <<<" << endl;
}

Professor::~Professor()
{
  cout << ">>> Destructeur Professor <<<" << endl;
}

void Professor::setLastName(const string& ln)  { lastName = ln; }
void Professor::setFirstName(const string& fn) { firstName = fn; }
string Professor::getLastName() const          { return lastName; }
string Professor::getFirstName() const         { return firstName; }

string Professor::toString() const
{
  return lastName + " " + firstName;
}

string Professor::tuple() const
{
  return to_string(getId()) + ";" + lastName + ";" + firstName;
}

Professor& Professor::operator=(const Professor& p)
{
  Schedulable::operator=(p);
  lastName = p.lastName;
  firstName = p.firstName;
  return *this;
}

ostream& operator<<(ostream& os, const Professor& p)
{
  os << p.toString();
  return os;
}