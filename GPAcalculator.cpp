/*Class: Lab3B
Section: c++
Term: S2
Instructor: Kavitha Muppa
Name: Ibrahima Diallo
Lab#: E01*/

#include <iostream>
#include <string>

using namespace std;
int main () {
  int premiere;
  int deuxieme;
  int trosieme;
  int quatreieme;
  int un;
  int deux;
  int trois;
  int quatre;
  float toutheures;
  float justheures;
  float gpa;
  cout << "Course 1 hours:";
  cin >> premiere;
  cout << "\nCourse 1 grades:";
  cin >> un;
  cout << "\nCourse 2 hours:";
  cin >> deuxieme;
  cout << "\nCourse 2 grades:";
  cin >> deux;
  cout << "\nCourse 3 hours:";
  cin >> trosieme;
  cout << "\nCourse 3 grades:";
  cin >> trois;
  cout << "\nCourse 4 hours:";
  cin >> quatreieme;
  cout << "\nCourse 4 grade:";
  cin >> quatre;
  justheures = premiere+deuxieme+trosieme+quatreieme; 
  cout << "\nTotal Hours: " << justheures << endl;
  toutheures = premiere*un+deuxieme*deux+trosieme*trois+quatreieme*quatre;
  cout << "Total quality points: " << toutheures << endl;
  gpa = toutheures/justheures;
  cout << "Your GPA for this semester is: " << gpa << endl;
}