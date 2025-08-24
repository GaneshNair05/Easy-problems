#include <iostream>
using namespace std;
// function to reverse the array
void reverseArray(int arr[],int n) {
 int start = 0; 
 int end = n-1;
 while (start < end){ 
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
  }
  
}
// main function
int main() {
int arr1[100], n;

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the " << n << " elements of the array:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
       reverseArray(arr1, n);
       
    cout << "The reverse order of the array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}

  

