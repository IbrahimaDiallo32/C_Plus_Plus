#include <iostream>
#include <string>
using namespace std;

class AudioCD{
private:
string cdTitle;
string artists[4];
int releaseYear;
string genre;
float condition;
public:
AudioCD(){
cdTitle = "";
string artists []= {"","","",""};
releaseYear = 1980;
genre = "";
condition = 0.0;
}
AudioCD(string cd, string a[], int r, string g, float c){
cdTitle = cd;
if ((sizeof(a) /sizeof(a[0])) > 4){
  cout << "Sorry, you've entered too many artists";
}
for (int i=0; i<4;i++){
  artists[i] = a[i];
}
releaseYear = r;
  if (r<1980){
    r=1980;
  }
genre =g;
condition =c;
  if (c<0 || c>5.0){
    c=0.0;
  }
}
//change these method names
string getcdTitle(){
  return cdTitle;
}

//if you know how to get artists without for loop do that
string getartists(){
  string temp;
  for (int i=0;i<4;i++){
   if(i==3){
      temp += ", "  + artists[i]+ "\n";
    }
  else {
    temp += artists[i]+ ", ";
    }
  }
  return temp;
  }
int getreleaseYear(){
  return releaseYear;
}
string getgenre(){
  return genre;
}
float getcondition(){
  return condition;
}
//change these methodnames
};

int main() {
  int cdsize;
  string title;
  string artists;
  string genre;
  int releaseYear;
  float condition;
  cout << "How many Audio CDs are in your collection: ";
  cin >> cdsize;
  AudioCD array[cdsize];
  string artist[4];
  //different array names

  //this runs for as many times as user input
  for (int i=0; i<cdsize; i++){
    cout << "CD #"<<i+1<< ": "<<endl;
    cout << "*Enter Title: ";
    cin >> title;
    cout << "*Enter Artists (type -1 when finished): ";
    for (int j=0; j<4;j++){  
      string artist;
      if (j>3){
      cout << "Sorry, too many artists."<<endl;
        break;
        }
      cin >> artist;
       if (artist == "-1"){
        break;
        }
      artists[j] = artist[j];
  }
    //there is a small bug that sometimes wont allow more than 2 artists
  cout << "*Enter Genre: ";
    cin >> genre;
  cout << "*Enter Release Year: ";
    cin >> releaseYear;
  cout << "*Enter Condition: ";
    cin >> condition;

    // you can name the object something other than object
    AudioCD object(title, artist, releaseYear, genre, condition);
    array[i] = object;
    }
  string artistlook;
     int choice;
  string cdname;
  do {
    cout << "\n[Main Menu]\n1) Album Info\n2) Find a CD\n3) Find an artist\n4) Log off\nChoice: ";
    cin >> choice;
    int cdoption;

    //if you want you can use if statements instead
    switch(choice)
    {
      case 1:
      cout << "Which CD do you want? ";
      cin >> cdoption;
      if (cdoption > cdsize || cdoption < 0){
        cout << "Sorry, there’s no CD that matches the criteria.";
      }else{
      cout << "\n1. " << array[cdoption-1].getcdTitle() << ", "<< array[cdoption-1].getreleaseYear()<< endl;
        for (int i= 0; i < 4; i++){
          if (artist[i] == ""){
            break;
          }
          cout << "Artist (" << i+1 << "): " << artist[i];
        }
        cout << "Genre: " << array[cdoption-1].getgenre()<<"\n"<< "Condition: " << array[cdoption-1].getcondition()<<endl;
        }
      break;
      case 2:
      cout << "What is the CD’s name?";
      cin >> cdname;
      for (int i=0; i<cdsize; i++){
        if (cdname == array[i].getcdTitle()){
          cout << "There is a match! "<<endl;
          cout << "1. " << array[i].getcdTitle() << ", "<< array[i].getreleaseYear()<< endl;
        for (int j= 0; j < 4; j++){
          if (artist[j] == ""){
            break;
          }
          cout << "Artist (" << i+1 << "): " << artist[i];
        }
        cout << "Genre: " << array[i].getgenre()<<"\n"<< "Condition: " << array[i].getcondition();
        }else{
          cout << "Sorry there is no match!";
        }
      }
      break;
      case 3:
      cout << "What artist are you looking for? ";
      cin >> artistlook;
      for (int i=0; i<cdsize;i++){
        if (artistlook == array[i].getartists()){
          cout << "CD(s) found!"<<endl;
        break;
        }
      }
      break;
      default:
      break;
    }
    
  }while (choice != 4);
cout << "Goodbye!";
  
}