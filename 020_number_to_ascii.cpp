#include <iostream>
using namespace std;
int main() {
 char asciiValue; //Assign datatype for the character
 
 cout << "Enter a character: ";    cin>>asciiValue;                                                          
 cout << "ASCII Value of " << asciiValue << " is " << int(asciiValue) << endl;       //int(variablename) gives ASCII value in C++ so int(asciiValue)
 
 return 0;
}
