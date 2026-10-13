#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Event.h"
using namespace std;

namespace planning
{
  int Event::currentCode = 1;

  Event::Event()
  {
    cout << ">>> Constructeur par defaut Event <<<" << endl;
    code = 0;
    title = NULL;
    timing = NULL;
  }

  Event::Event(int c, const char* t)
  {
    cout << ">>> Constructeur d'initialisation Event <<<" << endl;
    title = NULL;
    timing = NULL;
    setCode(c);
    setTitle(t);
  }

  Event::Event(const Event& e)
  {
    cout << ">>> Constructeur de copie Event <<<" << endl;
    title = NULL;
    timing = NULL;
    setCode(e.code);
    if (e.title) setTitle(e.title);
    if (e.timing) setTiming(*e.timing);
  }

  Event::~Event()
  {
    cout << ">>> Destructeur Event <<<" << endl;
    if (title) delete [] title;
    if (timing) delete timing;
  }

  void Event::setCode(int c) { code = c; }

  void Event::setTitle(const char* t)
  {
    if (title) delete [] title;
    title = new char[strlen(t) + 1];
    strcpy(title, t);
  }

  void Event::setTiming(const Timing& t)
  {
    if (timing) delete timing;
    timing = new Timing(t);
  }

  int Event::getCode() const { return code; }
  const char* Event::getTitle() const { return title; }
  const Timing& Event::getTiming() const { return *timing; }

  void Event::display() const
  {
    cout << "Code = " << code << ", Title = ";
    if (title) cout << title;
    else       cout << "(vide)";
    cout << ", Timing = ";
    if (timing) timing->display();
    else        cout << "(vide)";
  }
}