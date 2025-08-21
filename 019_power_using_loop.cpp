#include <iostream>                         
using namespace std;
int main(){

 double base, power, num =1;

 cout << "Enter base number and its power : ";
 cin >> base >> power;                          //Stores base number and its power
 int i;
 if(power >= 0){
   for(i = 1; i <= power; i++){                    //Multiplies base number by itself for power number of times 
      num = num * base;
   }
 }
 else{
  for(i =1; i<= -power; i++){
     num = num * base;
  }
  num = 1 / num;                                 // reciprocal for negative power
 }
   

 cout << base << " ^ " << power << " is " << num << endl;
 
 return 0;
}
