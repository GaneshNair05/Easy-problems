#include <iostream>
using namespace std;
//function to find smallest element 
int findSmallest (int arr[], int n){
 int min = arr[0];
 for (int i =0; i<n;i++){
  if(arr[i] < min){
   min = arr[i];
   }
  }
  return min;
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
 int min = findSmallest(arr1,n);
 cout << "The smallest element in the array is: " << min << endl;
 return 0;
 }
