

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main () {
  float eventsattended;
  float percent;
  int percentt;
  string graduation;
  cout << "[Scrappy’s Bucket List Rewards] \nHow many events have you attended?: " << endl;
  cin >> eventsattended;
  percent = eventsattended/63;
  percentt = percent*100;
  if (eventsattended <= 6)
  {
    cout << "Check out events at https://studentaffairs.kennesaw.edu/scrappysbucketlist/!";
  }
  else if (eventsattended <= 16)
  {
    cout << "You’ve been to " << percentt << "% of all SBL events! \nYou’ve earned a Drawstring Bag!";
  }
  else if (eventsattended <= 31)
  {
    cout << "You’ve been to " << percentt << "% of all SBL events! \nYou’ve earned a Drawstring Bag! \nYou've earned a hat!" << endl;
  }
  else if (eventsattended <= 47)
   {
     cout << "You’ve been to " << percentt << "% of all SBL events! \nYou’ve earned a Drawstring Bag! \nYou've earned a hat! \nYou've earned a T-Shirt!" << endl;
   }
   else if (eventsattended <= 62)
   {
     cout << "You’ve been to " << percentt << "% of all SBL events! \nYou’ve earned a Drawstring Bag! \nYou've earned a hat! \nYou've earned a T-Shirt! \nYou've earned a Glass Water Bottle!";
   }
   else if (eventsattended == 63)
   {
     cout << "You’ve been to " << percentt << "% of all SBL events! \nYou’ve earned a Drawstring Bag! \nYou've earned a hat! \nYou've earned a T-Shirt! \nYou've earned a Glass Water Bottle! \nAre you graduating?" << endl;
     cin >> graduation;
   }
   if (graduation == "Yes" || graduation == "yes" || graduation == "YES")
   {
     cout << "You've also earned a Challenge Coin and special Graduation Cords!";
   }
   else if (graduation == "No" || graduation == "NO" || graduation == "no")
   {
     cout << "There’s a special reward when you graduate!";
   }

return 0;
}