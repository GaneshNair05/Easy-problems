#include <iostream>
using namespace std;

int main() {

int num, counter;
    cout << "Enter number : ";
    cin >> num;

 if (num <= 1){
   cout << num << " is not a prime number";
   }
   else {
   for (int i =2 ; i*i<=num;i++){ //The smallest factor of a number greater than 1 cannot be greater than the sqrt of that respective number.
    if (num % i == 0){
    counter++;
    }
    }
    }
    if (counter > 0){
            cout << num << " is not a prime number";
            }
      
        else{
            cout << num << " is a prime number"<< endl;
    }
    return 0;
}
