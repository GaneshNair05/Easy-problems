#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int greater = max(num1, num2);
    int lesser = min(num1, num2);
    int lcm = greater;

    while (true) {
        if (lcm % lesser == 0) {
            break;
        }
        lcm += greater;
    }

    cout << "The LCM of " << num1 << " and " << num2 << " = " << lcm << endl;

    return 0;
}
