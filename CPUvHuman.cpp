#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <ctime>

//0 is cooperation, 1 is betrayl

using namespace std;
int main() {
int decision;
int computerdecision;
  int cscore {};
  int pscore {};
  for (int i =1; i <=3;i++){
    cout << "Round "<< i <<": \nDo you want to cooperate with or betray the computer player. \n(0- cooperate 1-betray): ";
  cin >> decision;
  srand (time(0));
  int A = rand () % 10;
    if (A <=4) {
      computerdecision=0;
    }
  if (A >=5){
    computerdecision=1;
  }
  if (decision== 0 && computerdecision == 1){
    pscore = pscore-3;
    cscore = cscore+5;
    cout << "Your score: "<< pscore;
    cout << "\nComputer score: "<<cscore<<endl;
  }
    if (decision== 1 && computerdecision == 0){
    pscore = pscore+5;
    cscore = cscore-3;
    cout << "Your score: "<< pscore;
    cout << "\nComputer score: "<<cscore<<endl;
    } 
    if (decision== 0 && computerdecision == 0){
    pscore = pscore-1;
    cscore = cscore-1;
    cout << "Your score: "<< pscore;
    cout << "\nComputer score: "<<cscore<<endl;
    }
     if (decision== 1 && computerdecision == 1){
    pscore = pscore-2;
    cscore = cscore-2;
    cout << "Your score: "<< pscore;
    cout << "\nComputer score: "<<cscore<<endl;
  }
    }
  if (pscore>cscore){
    cout <<"You Win!";

  }
  else if (pscore ==cscore){
  cout << "You Tied!";
    }else{
    cout<< "Sorry, You Lose!";
  }
  }