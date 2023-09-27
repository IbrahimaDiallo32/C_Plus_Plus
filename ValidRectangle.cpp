/*Class: Lab10B
Section: c++
Term: S2
Instructor: Kavitha Muppa
Name: Ibrahima Diallo
Lab#: E01 */

#include <iostream>
#include <string>

using namespace std;

float area(float a, float b){
  float area;
  area = a*b;
  return area;
  }
float permimeter(float a, float b){
  float perimeter = 2*(a+b);
  return perimeter;
}

static bool is_Valid_Sum(float a, float b){
  bool is_Valid_Sum = false;
  float sum =a+b;
  if (sum >30 ){
  is_Valid_Sum = true;
}else{
  is_Valid_Sum = false;
}
  return is_Valid_Sum;
  }



int main() {
  float a;
  float b;
  char answer;
  
  do {
  cout << "Enter width: ";
  cin>> a;
  cout << "Enter height: ";
  cin >> b;

    bool is_valid_sum = is_Valid_Sum(a,b);
    
    if (is_valid_sum == true){
      cout << "This is a valid rectangle"<< endl;
      cout << "The area is: " << area(a,b)<<endl;
      cout << "The perimeter is: " << permimeter(a,b)<<endl;
      cout << "Do you want to enter another width and height (Y/N)? :";
      cin >> answer;
      cout << "\n";
    }
    else{
      cout << "\nThis is an invalid rectangle \nDo you want to enter another width and height (Y/N)? :";
      cin >> answer;
    }
    }while (answer == 'Y' || answer == 'y');
cout << "Program ends";
}