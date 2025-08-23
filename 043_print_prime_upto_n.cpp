#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
//if a number is not prime, a divisor will lie in the range of [2,sqrt(num)] 
int main() {
    int num;
    cout << "Enter a number to find prime numbers till: ";
    cin >> num;

    cout << "Prime numbers up to " << num << " are:\n";
    for (int i = 1; i <= num; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
