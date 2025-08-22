#include <iostream>
using namespace std;

int main() {
    int number = 1;
    int product, i;
    cout << "Enter the number: " <<endl;
    cin >> number;
    
     for(i = 0; i <= 20; i++){                                  //Print loop for table
        product = number * i;
        cout << number << " X " << i << " = " << product << endl;
    }

    return 0;
}
