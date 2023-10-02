#include <iostream>
#include <string>

using namespace std;
int main () {
  float distance;
  int bonbon;
  int frigo;

  cout << "Enter a number of miles walked:";
  cin >> distance;
  bonbon = 11787.9072575*distance;
  frigo = 945.67*distance;
  cout << "\nI walked a total of " << distance << " today #fitnessgoals" << endl;
  cout << "Usless Conversion bot: Wow, " << distance << " miles is " << frigo << " refrigerators long." << endl;
  cout << "Usless Conversion bot: " << distance << " miles is also " << bonbon << " candy bars long." << endl;
  cout << "Usless Conversion bot: That's a lot!"; 
}
