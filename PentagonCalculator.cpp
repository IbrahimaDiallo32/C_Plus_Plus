#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main () {
  int side1pen;
  int perimeter;
  float area;
  double deuxieme;
  int serasdidi;
  float area2;
  cout << "[Pentagon Calculator]" << "\nEnter the length of one side:";
  cin >> side1pen;
  perimeter = side1pen*5;
  area = .25*sqrt(47.36)*(side1pen*side1pen);
  cout << "Pentagon Perimeter: " << perimeter;
  cout << "\nPentagon Area: " << area << endl;
  cout << "\n[Hexagon Calculator]" << "\nEnter the length of one side: ";
  cin >> deuxieme;
  serasdidi = deuxieme*6;
  cout << "Hexagon Perimeter: " << serasdidi << endl;
  area2 = 5.19615242/2*pow (deuxieme,2);
  cout << "Hexagon Area:" << area2 << endl;
  return 0;
}
