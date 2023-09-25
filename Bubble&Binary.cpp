#include <iostream>
#include <string>

using namespace std;
int main() {
int numbers [11] ={};
  int targetnumber;
  int valid_number=false;
  cout << "Please enter 11 numbers: "<<endl;
  
for (int i =0; i<11;i++){
  cout << "Number "<<i+1<< ": ";
  cin >> numbers[i];
}
for (int i=0; i < 11-1;i++){
  for (int j=0; j< 11-i-1;j++){
    if (numbers[j] > numbers[j+1]){
      int temporary= numbers[j];
      numbers[j]=numbers[j+1];
      numbers[j+1]=temporary;
    }
    
    }
  
}
  cout << "What is the target number: ";
  cin >> targetnumber;
  
  cout << "The sorted set is: ";
  for (int element : numbers){
    cout << element << ",";
  }

  int low =0;
  int high = 10;
cout << "\n";
  while (low<=high){
    int mid= (low+high)/2;
    cout << "Low is: " << low<<endl;
    cout << "High is: " << high<<endl;
    cout << "Mid is: " << mid<<endl;\
    cout << "Searching"<<endl;
    if (numbers[mid] == targetnumber){
      valid_number=true;
      break;
    }else if(numbers[mid] < targetnumber){
      low = mid+1;
    }else{
      high=mid-1;
    }
    
    }
  
  if (valid_number==true){
    cout << "\nThe target number is in the set";
  }else if(valid_number==false){
    cout << "\nThe target number is not in the set";
  }
  
  }
  
  
  
  
  
  
  /*how to sort
  int array [10];
  for (int i =1; i<=10; i++){
    cout << "#" << i<< ": ";
    cin >> array[i];
  }
  */
