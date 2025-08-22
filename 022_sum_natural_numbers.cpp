#include <iostream>
using namespace std;

int main(){

 int n, i, sum = 0;
 
 cout << "Enter a number : ";
 cin >> n;                                                    

 for(i = 1; i <= n; i++){                                      //Calculates sum of first n numbers
     sum = sum + i;
 }
  
 cout << "Sum of first " << n << " numbers : " << sum << endl; 


 return 0;
}
