# Madlib
C++
Ibrahima Diallo


#include <iostream>
#include <string>
using namespace std;
 int main () {
   string muny;
   string maybe;
   string omar;
   string regarde;
   string whoops;
cout << "Enter a name:";
getline (cin, muny);
cout << "You entered:" << " \"" << muny << "\"";
cout << "\nEnter another name:";
getline (cin, maybe);
cout << "You entered:" << "\"" << maybe << "\"";
cout << "\nEnter a verb:";
getline (cin, omar);
cout << "You entered:" << "\"" << omar << "\"";
cout << "\nEnter an adverb:"; 
getline (cin, regarde);
cout << "You entered:" << "\"" << regarde << "\"";
cout << "\nClick \'Enter\' for your MadLIB...";
getline (cin, whoops);
cout << "Once upon a time, there was a person named " << muny << " who had a child named " << maybe <<". This child would " << omar << " " << regarde << " while singing to strangers.";
 }
