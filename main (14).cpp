/*Class: Assignment1B
Section: c++
Term: S2
Instructor: Kavitha Muppa
Name: Ibrahima Diallo
Lab#: E01 */

#include <iostream>
#include <string>

using namespace std;
int main () {
  float totalprice;
  float taxrate;
  float fee;
  float totaltax;
  double num1, num2;
  float subtotal;
  float first;
  float second;
  num1 = 0.10;
  num2 = 0.20;
  double premier, deuxieme;


  cout << "Enter Total Price of the meal:";
  cin >> totalprice;
  cout << "Enter Tax rate \(As a decimal value\):";
  cin >> taxrate;
  cout << "Enter delivery fee:";
  cin >> fee;
  totaltax = totalprice*taxrate;
  subtotal = totalprice+fee;
  first = subtotal*num1;
  second = subtotal*num2;
  premier = first+subtotal+totaltax;
  deuxieme = second+subtotal+totaltax;
  cout << "\nA 10% tip would be:" << first << endl;
  cout << "The total would be:" << premier << endl;
  cout << "\nA 20% tip would be:" << second << endl;
  cout << "The total would be:" << deuxieme << endl;
}