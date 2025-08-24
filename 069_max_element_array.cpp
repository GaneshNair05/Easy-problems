#include <iostream>
using namespace std;
//function to find largest element 
int findLargest (int arr[], int n){
 int max = arr[0];
 for (int i =0; i<n;i++){
  if(arr[i] > max){
   max = arr[i];
   }
  }
  return max;
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
 int max = findLargest(arr1,n);
 cout << "The Largest element in the array is: " << max << endl;
 return 0;
 }
