#include <iostream>
using namespace std;

int main(){

 int year;
 bool leap = false;
 cout << "Enter a year : ";
 cin >> year;

 if(year % 400 == 0){                                   //leap year is divisible by 400
    leap = true;
 }
 else if(year % 4 == 0 && year % 100 !=0){              //leap year is also divisible by 4 and not by 100
    leap = true;
 }
 else{
    leap = false;
 }

 if(leap == true){
   cout << year << " is a leap year.";
 }
 else{
   cout << year << " is not a leap year.";
 }

 return 0;
}
