#include <iostream>
using namespace std;

int main(){

 int num1, num2, num3;
 cout << "Enter 3 numbers : ";
 cin >> num1 >> num2 >> num3; 
 
 if(num1 == num2 == num3){ //If numbers are equal, no comparison
       cout << "Numbers are equal." << endl;
       return 0;
 }
 if(num1 > num2){ //If num1 > num2, compare num1 with num3
   if(num1 > num3){
       cout << num1 << " is greatest number." << endl;
   }
   else{
       cout << num3 << " is greatest number." << endl;
   }
 }
 else{    //If num2 > num1, compare num2 with num3
   if(num2 > num3){
       cout << num2 << " is greatest number." << endl;
   }
   else{
       cout << num3 << " is greatest number." << endl;
   }
 }
 
 return 0;
}
