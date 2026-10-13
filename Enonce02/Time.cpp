#include <iostream>
#include "Time.h"
using namespace std;

namespace planning
{
  Time::Time()
  {
    cout << ">>> Constructeur par defaut Time <<<" << endl;
    hour = 0;
    minute = 0;
  }

  Time::Time(int h, int m)
  {
    cout << ">>> Constructeur d'initialisation Time (instant) <<<" << endl;
    hour = h;
    minute = m;
  }

  Time::Time(int duration)
  {
    cout << ">>> Constructeur d'initialisation Time (duree) <<<" << endl;
    hour = duration / 60;
    minute = duration % 60;
  }

  Time::Time(const Time& t)
  {
    cout << ">>> Constructeur de copie Time <<<" << endl;
    hour = t.hour;
    minute = t.minute;
  }

  Time::~Time()
  {
    cout << ">>> Destructeur Time <<<" << endl;
  }

  void Time::setHour(int h)   { hour = h; }
  void Time::setMinute(int m) { minute = m; }
  int Time::getHour() const   { return hour; }
  int Time::getMinute() const { return minute; }

  void Time::display() const
  {
    cout << hour << "h";
    if (minute < 10) cout << "0";
    cout << minute;
  }
}