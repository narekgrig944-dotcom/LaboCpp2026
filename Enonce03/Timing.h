#ifndef TIMING_H
#define TIMING_H

#include <string>
#include "Time.h"

namespace planning
{
  class Timing
  {
  private:
    std::string day;
    Time        start;
    Time        duration;
    int dayRank() const;

  public:
    static const std::string MONDAY;
    static const std::string TUESDAY;
    static const std::string WEDNESDAY;
    static const std::string THURSDAY;
    static const std::string FRIDAY;
    static const std::string SATURDAY;
    static const std::string SUNDAY;

    Timing();
    Timing(const std::string& d, const Time& s, const Time& dur);
    Timing(const Timing& t);
    ~Timing();

    void setDay(const std::string& d);
    void setStart(const Time& s);
    void setDuration(const Time& dur);
    std::string getDay() const;
    Time getStart() const;
    Time getDuration() const;

    void display() const;

    bool operator<(const Timing& t) const;
    bool operator>(const Timing& t) const;
    bool operator==(const Timing& t) const;
  };
}

#endif