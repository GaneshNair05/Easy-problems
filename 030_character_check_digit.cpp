#include <iostream>
using namespace std;

int main(){

 char c;
 
 cout << "Enter character : ";
 cin >> c;
 
  if(c >= '0' && c <= '9'){ //check if character is a digit
     cout << "The character is an digit." << endl;
 }
 else{
     cout << "The character is not an digit." << endl;    
 }

return 0;
}
