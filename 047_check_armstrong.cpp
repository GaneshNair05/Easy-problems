#include <iostream>
using namespace std;

int main ()
{
 int number, temp, remainder, sum=0;
 cout << "Enter number : ";
  cin >> number;
  temp = number;
  while(temp>0){
     remainder = temp % 10; // Get the last digit
     sum = sum + remainder*remainder*remainder  ; //Formula for armstrong (given)
     temp = temp/10;
     }
     if (sum == number){
        cout << number << " is an Armstrong number.";
    }
    else{
        cout << number << " is not an Armstrong number." << endl;
    }
    
 return 0;
}
