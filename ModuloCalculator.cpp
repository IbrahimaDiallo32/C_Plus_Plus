/*Class: Assignment2A
Section: c++
Term: S2
Instructor: Kavitha Muppa
Name: Ibrahima Diallo
Lab#: E01 */

#include <iostream>
#include <string>

using namespace std;
int main () {
  int premiere;
  int deuxieme;
  float deux;
  float quatre;
  float derniere;
  float learning;
  int maybe;
  cout << "Enter a number you want to find the multiple of:";
  cin >> premiere;
  cout << "Enter a second number:";
  cin >> deuxieme;
  cout << "Calculating..." << endl;
  quatre = deuxieme/premiere;
  maybe = quatre*premiere;
  derniere = quatre*premiere+deux;
  learning = deuxieme % premiere;
  cout << "The modolus is " << learning << endl;
  cout << "\nYour nearest multiple of " << premiere << " from " << deuxieme << " is " << maybe << endl;
}