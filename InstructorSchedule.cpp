
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main () {
  char day;
  char time;
  cout << "[Instructor Schedule] \nWhat day of the week is it?: " << endl;
  cin >> day;
  cout << "What time of day is it?: " << endl;
  cin >> time;
  
  if ((day == 'M' || day == 'm' ) && (time == 'a' || time == 'A'))
  {
    cout << "On Monday Morning, you’ll be teaching C++, section E04!";
  }
  else if ((day == 'M' || day == 'm') && (time == 'p' || time == 'P'))
  {
    cout << "On Monday Afternoon, you’ll be teaching Java, J02!";
  }
else if ((day == 'T' || day == 't') && (time == 'a' || time == 'A'))
{
  cout << "On Tuesday Morning, you’ll be holding office hours!";
}
else if ((day == 'T' || day == 't') && (time == 'P' || time == 'p'))
{
  cout << "On Tuesday Afternoon, you’ll be teaching C#, section W#1!";
}
else if ((day == 'W' || day == 'w') && (time == 'A' || time == 'a'))
{
  cout << "On Wednesday Morning, you’ll be teaching C#,section #02!";
}
else if ((day == 'W' || day == 'w') && (time == 'P' || time == 'p'))
{
  cout << "On Wednesday Afternoon, you’ll have some free time!";
}
else if ((day == 'R' || day == 'r') && (time == 'A' || time == 'a'))
{
  cout << "On Thursday Morning, you’ll be holding office hours!";
}
else if ((day == 'R' || day == 'r') && (time == 'P' || time == 'p'))
{
  cout << "On Thursday Afternoon, you’ll be teaching C++, section WE3!";
}
else if ((day == 'F' || day == 'f') && (time == 'A' || time == 'a'))
{
  cout << "On Friday Morning, you’ll be teaching Java, WJ3";
}
else if ((day == 'F' || day == 'f') && (time == 'P' || time == 'p'))
{
  cout << "On Friday Afternoon, you’ll have some free time!";
}
else
{
  cout << "That’s not a valid day or time!!";
}
return 0;
}

