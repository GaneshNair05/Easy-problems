#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, remainder; 
    cout << "Enter an number: ";
    cin >> num;
    
    while(num>0){
     remainder = num % 10; // Get the last digit
     reverse = reverse*10+remainder  ;
     num = num/10;
     }
     cout << "Reverse of the number = " << reverse << endl;

    return 0;

}
