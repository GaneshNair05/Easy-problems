#include <iostream>
using namespace std;

int main(){

 char c;
 
 cout << "Enter character : ";
 cin >> c;
 
  if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){ //check if character is an alphabet
     cout << "The character is an alphabet." << endl;
 }
 else{
     cout << "The character is not an alphabet." << endl;    
 }

return 0;
}
