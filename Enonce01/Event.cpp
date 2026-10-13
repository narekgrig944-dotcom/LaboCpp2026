#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Event.h"
using namespace std;

Event::Event(const Event& e)
{
  cout << ">>> Constructeur de copie <<<" << endl;
  title = NULL;
  setCode(e.code);
  if (e.title) setTitle(e.title);
}

Event::Event(int c, const char* t)
{
  cout << ">>> Constructeur d'initialisation <<<" << endl;
  title = NULL;
  setCode(c);
  setTitle(t);
}

void Event::setCode(int c)
{
  code = c;
}

void Event::setTitle(const char* t)
{
  if (title) delete [] title;
  title = new char[strlen(t) + 1];
  strcpy(title, t);
}

int Event::getCode() const
{
  return code;
}

const char* Event::getTitle() const
{
  return title;
}

Event::Event()
{
  cout << ">>> Constructeur par defaut <<<" << endl;
  code = 0;
  title = NULL;
}

Event::~Event()
{
  cout << ">>> Destructeur <<<" << endl;
  if (title) delete [] title;
}

void Event::display() const
{
  cout << "Code = " << code << endl;
  if (title) cout << "Title = " << title << endl;
  else cout << "Title = (vide)" << endl;
}