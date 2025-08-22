#include <iostream>
using namespace std;

int main(){

 int number, digit, original, reverse=0;
 cout << "Enter a number : ";
 cin >> number;
 
  original = number; //Assign to original                                                   
 do
     {
         digit = number % 10;
         reverse = (reverse * 10) + digit;
         number = number / 10;
     } while (number != 0);

     cout << " The reverse of the number is: " << reverse << endl;

     if (original == reverse and original > 0)  
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;


 return 0;
}
