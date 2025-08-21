#include <iostream>
#include <string>
using namespace std;
int main (){
  float celsius, farenheit;
  cout << "Enter the temperature in celsius: ";
  cin>>celsius; //input in celsius and store in the variable 
  farenheit = (celsius *1.8)+32; //formula for conversion
  cout << "The temperature in farenheit is:" <<farenheit<<endl; //output
  return 0;
  }
