#include <iostream>
#include <string>
using namespace std;
int main (){
 int number;
 cout<<"enter a number: ";
 cin>> number; //take number input
 if(number >0){
  cout << "The number is positive" ;  //condition for checking positive
  }
  else if(number <0) {
    cout << "The number is negative" ; //condition for checking negative
  }
  else {
  cout<<"The number is zero"<< endl;
  }
 return 0;
 }
