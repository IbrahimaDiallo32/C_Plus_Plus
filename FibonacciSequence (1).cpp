#include <iostream>
#include <string>

using namespace std;
int main() {
  int sequencenumber{};
  bool valid_number=false;
  cout << "[Fibonacci Sequence Generator]" <<endl;
  
  while (valid_number==false){
    cout<< "How long should the Fibonacci Sequence be?: ";
    cin >> sequencenumber;
    if (sequencenumber <0){
      cout << "Sequences must be larger than 0!"<<endl;
      valid_number=false;
    }else{
      cout << "Okay, here’s your sequence: "<<endl;
      valid_number=true;
    }
    }
  
  int array[sequencenumber];
  array[0]=0;
  if (sequencenumber ==0){
    cout << "0";
  }
  else if(sequencenumber>1){
    array[1]=1;
    for (int i=2; i<=sequencenumber;i++){
   array[i] = array[i-1]+array[i-2];
  }
    for (int temporary : array){
      cout<<  temporary << " ,";
    }
}
  }