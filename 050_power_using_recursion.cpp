#include <iostream>
using namespace std;
//recursive function 
double power(double base, int exponent) {
  
    //checking different conditions
    //Any number raised to 1 is zero
    if (exponent == 0){
        return 1;
        }
    //negative exponent
    if (exponent < 0){
        return 1 / power(base, -exponent);
     }

    return base * power(base, exponent - 1);
}

int main() {
    double base ;
    int exponent;
    cout << "The base number is "; 
    cin >>base;
    cout << "The exponent is " ;
    cin >> exponent;
    double result = power(base, exponent);
    cout << result << endl;
    return 0;
}
