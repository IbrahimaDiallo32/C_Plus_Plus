/*Class: Lab10B
Section: c++
Term: S2
Instructor: Kavitha Muppa
Name: Ibrahima Diallo
Lab#: E01 */

#include <string>
#include <iostream>

using namespace std;
class dog{
  public:
int age;
  float weight;
string name;
  string color;
  string breed;
  dog (int a, float w, string n, string c, string b){;
  age = a;
  weight = w;
  name = n;
  color = c;
  breed = b;
}
  dog(int a, string n, string c, string b){
    age = a;
    name = "asd";
    color = c;
    breed = "qwer";
  }
void bark(){
  cout << " “Woof! Woof!”";
};
void rename(string name, string newname){
  name = newname;
}
void eat(double newweight){
  weight = weight+newweight;
}
};
int main() {
  int age;
  float weight;
  string name;
  string color;
  string breed;
  cout << "You are about to create a dog.\nHow old is the dog: ";
  cin >> age;
  cout << "How much does the dog weigh: ";
  cin >> weight;
  cout << "What is the dog’s name: ";
  cin >> name;
  cout << "What color is the dog: ";
  cin >> color;
  cout << "What breed is the dog:";
  cin >> breed;

  dog d1(age, name, color, breed);
  

  
}