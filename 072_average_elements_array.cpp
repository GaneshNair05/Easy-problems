#include <iostream>
using namespace std;
//function to find sum of all the elements in array
int sum (int arr[], int n){
 int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

//Main function 
int main (){
int arr1[100], n;

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the " << n << " elements of the array:" << endl;

    // Input elements
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
 double total = (sum(arr1,n))/n;
 cout << "The average of all elements : " << total << endl;
 return 0;
 }
