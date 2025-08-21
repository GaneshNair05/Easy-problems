#include <iostream>
using namespace std;
int main (){
 int num1, num2; 
 cout<<"Enter two numbers: " ;
 cin >> num1 >> num2; 
 //condition for equal
 if (num1==num2){
 cout<<"The numbers are equal"<<endl;
 return 0;
 }
 //condition for greater or not
 if(num1 > num2){
 cout << num1 << " is greater than " << num2 << endl;
 }
 else{
 cout << num2<< " is greater than " << num1 << endl;
 }
 return 0; 
 }
