/*Class: Assignment4A
Section: c++
Term: S2
Instructor: Kavitha Muppa
Name: Ibrahima Diallo
Lab#: E01 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {
  int startNumber;
  int limit;
  cout << "[Times Table Generator]" << endl;
bool validnumber=false;
bool validlimit=false;
  while (validnumber==false) {
    cout << "Enter your start number: ";
  cin >> startNumber;
    if (startNumber<=0){
      cout<< "Invalid number, try again!" <<endl;
      }else{
      validnumber = true;
      }
    }
  

  while (validlimit==false) {
    cout << "Enter the limit you want to multiply to: ";
      cin >> limit;
    if (limit<0) {
      cout << "Invalid number, try again!"<<endl;
    }else{
      validlimit = true;
  }
    }

for (int i =1;i<=limit;i++) {
  cout <<startNumber << "*" << i << " = " << i*startNumber << endl;
  }
  }
  