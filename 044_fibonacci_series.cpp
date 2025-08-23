#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the limit: ";
    cin >> num;
    
    int f1 = 0, f2 =1;
    if (num >= 0) {
        cout << f1 << endl;
    }
    if (num >= 1) {
        cout << f2<< endl;
    }
    int counter;
    while (counter <=num){
    counter = f1 +f2;
    if(counter >num){
    break;
    }

  cout << counter << endl;
  f1=f2;
  f2=counter;
  
  }
  return 0;
  }
 

