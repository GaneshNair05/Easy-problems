#include <iostream>
using namespace std;

int main() {
    int num, i,sum;;

    cout << "Enter the number: ";
    cin >> num;
   
     for(i = 1; i <= num; i+=2){                                      
     sum = sum + i;
 }

 cout << "Sum of first " << num << " numbers : " << sum << endl; //Displays result


 return 0;
}
