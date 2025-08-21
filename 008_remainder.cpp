#include <iostream>

using namespace std;
int main (){
 int num1, num2, remainder;
 cout<<"enter first number:";
 cin>>num1;  //Store first number 
 cout<<"enter second number:";
 cin>>num2; //Store second number 
 remainder = num1 % num2; //remainder
 cout << "The remainder is : " <<remainder <<endl;
 return 0;
}
