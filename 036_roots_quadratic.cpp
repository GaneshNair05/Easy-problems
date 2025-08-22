#include <iostream>
#include <cmath>
using namespace std;

int main(){

double a,b,c,discriminant, realRoot, imaginaryRoot, x ,y;
 cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c; //formula for discriminant
    
    //conditions depending on discriminant value
    
    if (discriminant > 0) {
        x = (-b + sqrt(discriminant)) / (2*a);
        y = (-b - sqrt(discriminant)) / (2*a);
        cout << "x = " << x << endl;
        cout << "y = " << y<< endl;
        }
        else if(discriminant ==0) {
        x = -b/2*a;
        cout << "x = y =" << x << endl;
    }

    else {
        realRoot = -b/(2*a);
        imaginaryRoot =sqrt(-discriminant)/(2*a);
        cout << "x = " << realRoot << "+" << imaginaryRoot << "i" << endl;
        cout << "y = " << realRoot << "-" << imaginaryRoot << "i" << endl;
    }
          return 0;
}
