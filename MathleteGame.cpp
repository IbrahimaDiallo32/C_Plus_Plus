

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>

using namespace std;
int main () {
  srand (time(0));
  int A {};
  int B {};
  int answer;
  int gametype;
  cout << "[Mathletes Game] \nChoose a game mode (0=Easy, 1=Hard) : ";
  cin >> gametype;
  if (gametype == 0) {
    cout << "Playing on easy mode, huh? Okay!";
    gametype =0;
  }else{
    cout << "So, you want a challenge? Okay!";
    gametype =1;
  }

  int tries =0;
  if (gametype == 0) {
     for (int i=1;i<6;i++) {
       A = rand () % 511-255;
       B = rand () % 511-255;
     cout << "\nQ" << i << ". " << A << " * " << B << " = ";
  cin >> answer;
       if (answer == A*B && i==5){ 
       cout << answer <<"\nCorrect!\nYou Win!";
       break;
       
    }
     else if (answer == A*B && tries <4){
       cout << answer << "\nCorrect!";
   }else if (tries <2){
      cout << answer << "\nIncorrect! Try again.";
       tries++;
       i--;
         }       
       else{
      cout << answer << "\nIncorrect! Game over...";
        break;
    }
     
     } 
     }

else {
  for (int i =1; i<11;i++) {
    A = rand () % 510-255;
    B = rand () % 510-255;
    cout << "\nQ." << i << " " << A << "* " << B << " = ";
    cin >> answer;
    if ( answer == A*B && i==10) {
      cout << answer << "\nCorrect!\nYou Win!";
    }
    else if ( answer == A*B) {
cout << answer << "\nCorrect!";
  }else{
      cout << answer << "\nIncorrect! Game over...";
      break;
  }
    
  }
}
  
  }