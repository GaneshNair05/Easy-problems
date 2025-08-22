#include <iostream>
using namespace std;

int main(){

 int n, i, product = 1;
 
 cout << "Enter a number : ";
 cin >> n;                                                    

 for(i = 1; i <= n; i++){                                      //Calculates product of first n numbers
    product = product * i;   
 }
  
 cout << "Product of first " << n << " numbers : " << product << endl; 


 return 0;
}
