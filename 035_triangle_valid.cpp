#include <iostream>
using namespace std;

int main(){

float angle1, angle2, angle3,sum;
 cout << "Enter the three angles of your triangle : ";
 cin >> angle1 >> angle2 >> angle3;

 sum = angle1 + angle2 + angle3;    //Taking sum of the angles 

 if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0){        //Conditions for validity of a triangle, Sum of the three angles = 180, and all angles are positive
    cout << "The triangle is valid." << endl;
 }
 else{
    cout << "The triangle is not valid." << endl;
 }

 return 0;
}
