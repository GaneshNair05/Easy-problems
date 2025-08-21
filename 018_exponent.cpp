#include <iostream>
#include <cmath>                               //For power function
using namespace std;
int main(){

 double num, power, result;

 cout << "Enter number and its power : ";
 cin >> num >> power;                          //Stores number and its power

 result = pow(num, power);

 cout << "Result = " << result << endl;       //Displays result
 
 return 0;
}
