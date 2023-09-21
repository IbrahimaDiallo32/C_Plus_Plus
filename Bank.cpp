 /*Class: Lab6A
Section: c++
Term: S2
Instructor: Kavitha Muppa
Name: Ibrahima Diallo
Lab#: E01 */

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
int main () {
  cout << "Welcome! \nYou have $1000 in your account" << endl;
  char menu;

  int choice;
  int casenumber;
  int withdrawl;
  int deposit;
  int balance=1000;

  do {
    cout << "Menu \n0-Make a deposit \n1-Make a withdrawl \n2-Display account value";
    cout << "\nPlease make a selection: ";
    cin >> casenumber;

    switch (casenumber) {
      case 0:
      cout << "How much would you like to deposit? :";
      cin >> deposit;
      balance = balance+deposit;
      cout << "Your balance is now $" << balance;
      cout << "\nWould you like to return to the main menu (Y/N)?";
      cin >> menu;
      break;
      case 1:
      cout << "\nHow much would you like to withdraw? ";
      cin >> withdrawl;
        balance= balance-withdrawl;
      cout << "\nYour balance is now $" << balance;
      cout << "\nWould you like to return to the main menu (Y/N)?";
      cin >> menu;
      break;
      case 2: 
        cout << "Your balance is now $" << balance;
      cout << "\nWould you like to return to the main emu (Y/N)?";
      cin >> menu;
      break;
      defualt:
      cout << "Invalid entry, please try again.";
      cout << "\nWould you like to return to the main emu (Y/N)?";
        cin >> menu;
      break;
      }
    } while (menu == 'Y' || menu == 'y');
   cout << "Thank you for banking with us!" << endl;
  }
