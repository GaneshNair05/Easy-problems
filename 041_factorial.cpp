#include <iostream>
using namespace std;

int main() {
    int num, i, product=1;   
    cout << "Enter number : ";
    cin >> num;
    for(i=1;i<=num;i++){
    product = product*i;
    }
     cout << "Factorial of " << num << "is equal to " << product << endl;
    return 0;
    }
