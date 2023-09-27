#include <string>
#include <iostream>
using namespace std;


int main () {
string array[5][5] = {{"_.","X.","_.","X.","X."},{"_.","X.","_.","X.","W."},{"_.","_.","_.","X.","_."},{"X.","X.","_.","_.","_."},{"_.","_.","_.","X.","X."}};
  //has_Win is only true if you hit the 'W'
  //Gameover is only true if you hit an 'X'
bool has_Win= false;
bool gameover = false;
  string direction;
  int x= 0;
  int y = 0;
  array[x][y] = "O.";

while (has_Win == false || gameover == false){
  
for (int i=0; i<5;i++){
  for (int j =0; j<5;j++){
    cout << array[i][j];
  }
  cout << "\n";
}
  
  cout << "Which direction do you want to move? ";
  cin >> direction;

  if (direction == "down" || direction == "Down"){
    
    if (x+1>4){
      cout << "You can’t move there – it’s out of bounds!"<<endl;
    }
    else if(array[x+1][y] == "X."){
      gameover = true;
      break;
    }
    else if (array[x+1][y] == "W."){
      has_Win=true;
      break;
    }
    else{
      array[x][y] = "_.";
      x= x+1;
      array[x][y] = "O.";
    }
    
  }
  else if (direction == "right" || direction == "Right"){
     if (y+1>4){
      cout << "You can’t move there – it’s out of bounds!"<<endl;
    }
      else if(array[x][y+1] == "X."){
      gameover = true;
      break;
    }
    else if (array[x][y+1] == "W."){
      has_Win=true;
      break;
    }
    else {
    array[x][y] = "_.";
    y = y+1;
    array[x][y] = "O.";
  }
    }
  else if (direction == "up" || direction == "Up"){
    if (x-1<0){
      cout << "You can’t move there – it’s out of bounds!"<<endl;
    }
    else if(array[x-1][y] == "X."){
      gameover = true;
      break;
    }
    else if (array[x-1][y] == "W."){
      has_Win=true;
      break;
    }
    else{
    array[x][y] = "_.";
    x = x-1;
    array[x][y] = "O.";
  }
    }
  else if (direction == "left" || direction == "Left"){
    if (y-1<0){
      cout << "You can’t move there – it’s out of bounds!"<<endl;
    }
    else if(array[x][y-1] == "X."){
      gameover = true;
      break;
    }
    else if (array[x][y-1] == "W."){
      has_Win=true;
      break;
    }
    else{
    array[x][y] = "_.";
    y= y-1;
    array[x][y] = "O.";
  }
    }
 else{
    cout << "That’s not a valid direction!";
  }
  }
 
if (gameover == true){
  cout << "You hit a wall – Game Over!";
}
  else if(has_Win == true){
    cout << "You win!";
  }
  }