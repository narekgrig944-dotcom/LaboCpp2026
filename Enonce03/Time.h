#ifndef TIME_H
#define TIME_H

#include <iostream>

namespace planning
{
  class Time
  {
  private:
    int hour;
    int minute;

  public:
    Time();
    Time(int h, int m);
    Time(int duration);
    Time(const Time& t);
    ~Time();

    void setHour(int h);
    void setMinute(int m);
    int getHour() const;
    int getMinute() const;

    void display() const;

    Time& operator=(const Time& t);

    Time operator+(int m) const;
    Time operator+(const Time& t) const;
    Time operator-(int m) const;
    Time operator-(const Time& t) const;
    friend Time operator+(int m, const Time& t);
    friend Time operator-(int m, const Time& t);

    bool operator<(const Time& t) const;
    bool operator>(const Time& t) const;
    bool operator==(const Time& t) const;

    friend std::ostream& operator<<(std::ostream& os, const Time& t);
    friend std::istream& operator>>(std::istream& is, Time& t);

    Time& operator++();
    Time operator++(int);
    Time& operator--();
    Time operator--(int);
  };
}

#endif