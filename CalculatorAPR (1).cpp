#include <iostream>
#include <string>

using namespace std;
int main () {
  float ici;
  float labas;
  float premier;
  float deuxieme;
  float finale;
  float derniere;
  float got;
  cout << "Enter your current balance:";
  cin >> ici;
  cout << "Enter your APR \(Anual Percentage Rate\):";
  cin >> labas;
  premier = labas/12;
  deuxieme = ici*labas;
  derniere = labas/100;
  finale = derniere*ici;
  got = finale/12;
  cout << "\nYour monthly percentage rate:" << premier << endl;
  cout << "Minimum Payment:" << got << endl;


  


}