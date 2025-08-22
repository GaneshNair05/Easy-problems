#include <iostream>
using namespace std;

int main(){

 float side1, side2, side3;
 
 cout << "Enter the three sides : ";
 cin >> side1 >> side2 >> side3;
 
 if(side1 == side2 && side2 == side3){ 
 cout << "The triangle is equilateral" <<endl;
 } 
 else if(side1 == side2 || side2 == side3 || side1 == side3){
 cout << "The triangle is isosceles" << endl;
 } 
 else {
 cout << "The triangle is scalene" <<endl;
 }
 return 0;
 }
