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
}