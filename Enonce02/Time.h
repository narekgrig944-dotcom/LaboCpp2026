#ifndef TIME_H
#define TIME_H

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
  };
}

#endif