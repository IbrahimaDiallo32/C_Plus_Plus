#include <iostream>
#include <string>

using namespace std;
int main(){
  int playermoney =100;
  int random;
  int numberbet;
  int dollarbet;
  char choice;
  cout << "[Casino Royale Roulette]"<<endl;
  do {
    cout << "You currently have $"<< playermoney << ".\nWhat number do you want to bet on (between 0 and 36)?: ";
    cin >> numberbet;
  cout << "How much do you want to bet (between 1 and 100)?: ";
  cin >> dollarbet; 
  srand(time(0));
  random = rand () % 36;
  cout << "...Spin the wheel..."<<endl;
  cout << "It landed on [" << random <<"]!"<<endl;
  if (random == numberbet){
    cout << "Congratulations, you earned "<< dollarbet*2 << "dollar(s)!"<<endl;
    playermoney +=dollarbet;
  }else{
    cout << "Sorry, you lost " << dollarbet << " dollar(s)."<<endl;
    playermoney -= dollarbet;
  }
    if (playermoney<1){
      break;
    }
  cout << "Do you want to quit?";
  cin >> choice;
  
    }while (choice == 'n' || choice == 'N' && playermoney>0);
  if (playermoney >0){
    cout << "Your final winnings are "<< playermoney << " dollar(s).";
    }else{
    cout << "Game Over! You ran out of money!";
    }
}