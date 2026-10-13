#include <iostream>
#include "Schedulable.h"
using namespace std;

Schedulable::Schedulable()
{
  cout << ">>> Constructeur par defaut Schedulable <<<" << endl;
  id = 0;
}

Schedulable::Schedulable(int i)
{
  cout << ">>> Constructeur d'initialisation Schedulable <<<" << endl;
  id = i;
}

Schedulable::Schedulable(const Schedulable& s)
{
  cout << ">>> Constructeur de copie Schedulable <<<" << endl;
  id = s.id;
}

Schedulable::~Schedulable()
{
  cout << ">>> Destructeur Schedulable <<<" << endl;
}

void Schedulable::setId(int i) { id = i; }
int Schedulable::getId() const { return id; }

Schedulable& Schedulable::operator=(const Schedulable& s)
{
  id = s.id;
  return *this;
}