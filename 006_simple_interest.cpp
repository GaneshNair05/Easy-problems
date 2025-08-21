#include <iostream>
#include <string>
using namespace std;
int main (){
 int simple_interest, principle_amount, interest, time;
 cout << "Enter the principle amount: "; 
 cin>> principle_amount; //Stores principle amount
 cout << "Enter the Interest: ";
 cin>> interest;  //stores interest
 cout << "Enter the time: ";
 cin>> time; //Stores time;
 simple_interest = (principle_amount*interest*time)/100; //Formula for simple interest
 cout<<"The simple interest is: " << simple_interest<<endl;
 return 0;
 }
 
