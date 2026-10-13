#include <iostream>
#include "Timing.h"
using namespace std;

namespace planning
{
  const string Timing::MONDAY    = "Lundi";
  const string Timing::TUESDAY   = "Mardi";
  const string Timing::WEDNESDAY = "Mercredi";
  const string Timing::THURSDAY  = "Jeudi";
  const string Timing::FRIDAY    = "Vendredi";
  const string Timing::SATURDAY  = "Samedi";
  const string Timing::SUNDAY    = "Dimanche";

  Timing::Timing()
  {
    cout << ">>> Constructeur par defaut Timing <<<" << endl;
  }

  Timing::Timing(const string& d, const Time& s, const Time& dur) : day(d), start(s), duration(dur)
  {
    cout << ">>> Constructeur d'initialisation Timing <<<" << endl;
  }

  Timing::Timing(const Timing& t) : day(t.day), start(t.start), duration(t.duration)
  {
    cout << ">>> Constructeur de copie Timing <<<" << endl;
  }

  Timing::~Timing()
  {
    cout << ">>> Destructeur Timing <<<" << endl;
  }

  void Timing::setDay(const string& d)      { day = d; }
  void Timing::setStart(const Time& s)      { start = s; }
  void Timing::setDuration(const Time& dur) { duration = dur; }
  string Timing::getDay() const             { return day; }
  Time Timing::getStart() const             { return start; }
  Time Timing::getDuration() const          { return duration; }

  void Timing::display() const
  {
    if (day.empty()) cout << "(vide)";
    else             cout << day;
    cout << " ";
    start.display();
    cout << " (duree ";
    duration.display();
    cout << ")";
  }

    int Timing::dayRank() const
  {
    if (day == MONDAY)    return 1;
    if (day == TUESDAY)   return 2;
    if (day == WEDNESDAY) return 3;
    if (day == THURSDAY)  return 4;
    if (day == FRIDAY)    return 5;
    if (day == SATURDAY)  return 6;
    if (day == SUNDAY)    return 7;
    return 0;
  }

  bool Timing::operator<(const Timing& t) const
  {
    if (dayRank() != t.dayRank()) return dayRank() < t.dayRank();
    if (!(start == t.start))      return start < t.start;
    return duration < t.duration;
  }

  bool Timing::operator>(const Timing& t) const
  {
    return t < *this;
  }

  bool Timing::operator==(const Timing& t) const
  {
    return dayRank() == t.dayRank() && start == t.start && duration == t.duration;
  }
}