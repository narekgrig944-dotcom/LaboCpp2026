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
    cout << *this;
  }

  Time& Time::operator=(const Time& t)
  {
    hour = t.hour;
    minute = t.minute;
    return *this;
  }

  Time Time::operator+(int m) const
  {
    return Time(hour * 60 + minute + m);
  }

  Time Time::operator+(const Time& t) const
  {
    return Time(hour * 60 + minute + t.hour * 60 + t.minute);
  }

  Time Time::operator-(int m) const
  {
    return Time(hour * 60 + minute - m);
  }

  Time Time::operator-(const Time& t) const
  {
    return Time(hour * 60 + minute - (t.hour * 60 + t.minute));
  }

  Time operator+(int m, const Time& t)
  {
    return t + m;
  }

  Time operator-(int m, const Time& t)
  {
    return Time(m - (t.hour * 60 + t.minute));
  }

  bool Time::operator<(const Time& t) const
  {
    return hour * 60 + minute < t.hour * 60 + t.minute;
  }

  bool Time::operator>(const Time& t) const
  {
    return hour * 60 + minute > t.hour * 60 + t.minute;
  }

  bool Time::operator==(const Time& t) const
  {
    return hour * 60 + minute == t.hour * 60 + t.minute;
  }

  ostream& operator<<(ostream& os, const Time& t)
  {
    os << t.hour << "h";
    if (t.minute < 10) os << "0";
    os << t.minute;
    return os;
  }

  istream& operator>>(istream& is, Time& t)
  {
    int h, m;
    char c;
    is >> h >> c >> m;
    if (is && c == 'h')
    {
      t.hour = h;
      t.minute = m;
    }
    else is.setstate(ios::failbit);
    return is;
  }

  Time& Time::operator++()
  {
    *this = *this + 30;
    return *this;
  }

  Time Time::operator++(int)
  {
    Time temp(*this);
    *this = *this + 30;
    return temp;
  }

  Time& Time::operator--()
  {
    *this = *this - 30;
    return *this;
  }

  Time Time::operator--(int)
  {
    Time temp(*this);
    *this = *this - 30;
    return temp;
  }
}