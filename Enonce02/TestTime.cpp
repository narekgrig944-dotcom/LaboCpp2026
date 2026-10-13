#include <iostream>
using namespace std;
#include "Time.h"
using namespace planning;

int main()
{
  {
    Time instant;
    instant.display();
    cout << endl;
    instant.setHour(9);
    instant.setMinute(20);
    instant.display();
    cout << endl << "heure : " << instant.getHour() << endl;
    cout << "Minute : " << instant.getMinute() << endl;
  }
  return 0;
}