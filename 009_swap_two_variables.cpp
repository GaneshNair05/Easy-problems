#include <iostream>
using namespace std;
int main (){
 int temp, num1, num2; 
 cout<<"enter first number:";
 cin>>num1;  //Store first number 
 cout<<"enter second number:";
 cin>>num2; //Store second number 
 cout<< "Before swapping: Number 1 :" << num1 << " Number 2: " << num2 << endl; 
 temp= num1;
 num1 = num2; //Swapping 
 num2 = temp;
  cout<< "After swapping: Number 1 :" << num1 << " Number 2: " << num2 << endl; 
  
  return 0;
  }
