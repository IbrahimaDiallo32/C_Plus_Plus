#include <iostream>
#include <string>

using namespace std;

void sortArray(int array[8]){
for (int i=0; i < 8-1;i++){
  for (int j=0; j< 8-i-1;j++){
    if (array[j] > array[j+1]){
      int temporary= array[j];
      array[j]=array[j+1];
      array[j+1]=temporary;
    }
    
    }
}
  for (int i=0;i<=7;i++){
    if (array[i] == array[7]){
      cout << array[7];
      break;
    }
    cout << array[i] << ",";
    
  }
  }
void sortArray(float array[8]){
for (int i=0; i < 8-1;i++){
  for (int j=0; j< 8-i-1;j++){
    if (array[j] > array[j+1]){
      float temporary= array[j];
      array[j]=array[j+1];
      array[j+1]=temporary;
    }
    
    }
}
  for (int i=0;i<=7;i++){
    if (array[i] == array[7]){
      cout << array[7];
      break;
    }
    cout << array[i] << ",";
    
  }
  }
void sortArray(char array[8]){
  for (int i=0; i < 8-1;i++){
  for (int j=0; j< 8-i-1;j++){
    if (array[j] > array[j+1]){
      char temporary= array[j];
      array[j]=array[j+1];
      array[j+1]=temporary;
    }
    
    }

}
  for (int i=0;i<=7;i++){
    cout << array[i]<<",";
  }
  }


int main () {
  string datatype;
  cout << "[Overloaded Sort]\nWhat data type do you want to enter?";
    cin>>datatype;
  
  if (datatype == "int" || datatype == "Int"){
    int array[8];
  for (int i=0;i<=7;i++){
    cout << "Value " << i+1 << ": ";
    cin >> array[i];
    }
    cout << "Calling sortArray()...\nThe sorted values are:"<<endl;
    sortArray(array);
    }
    else if (datatype == "float" || datatype == "Float"){
    float array[8];
  for (int i=0;i<=7;i++){
    cout << "Value " << i+1 << ": ";
    cin >> array[i];
    }
      cout << "Calling sortArray()...\nThe sorted values are:"<<endl;
      sortArray(array);
      }
  else{
    char array[8];
  for (int i=0;i<=7;i++){
    cout << "Value " << i+1 << ": ";
    cin >> array[i];
  }
    cout << "Calling sortArray()...\nThe sorted values are:"<<endl;
    sortArray(array);
    }

}
