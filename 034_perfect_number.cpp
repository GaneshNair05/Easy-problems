#include <iostream>
using namespace std;

int main(){

 int number, i, sum_divisor =0;
 
 cout << "Enter number : ";
 cin >> number;

if(number <= 0){
cout<<"Enter a positive number"<<endl;
return true;
}
 else{
    for(i=1; i < number; i++){                           
        if(number % i == 0){                             
            sum_divisor += i;                              
        }
    }
 }
if(sum_divisor == number){                                 
    cout << number << " is a perfect number." << endl;
}
else{
    cout << number << " is not a perfect number." << endl;
}

return 0;
}

