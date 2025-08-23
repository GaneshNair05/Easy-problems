#include <iostream>
#include <algorithm>
using namespace std;
int main(){
 string str,choice; 
 cout << "Enter a string to transform: " ;
 cin >> str;
 cout << "Select uppercase or lowercase: " ;
 cin >> choice;
 if (choice == "uppercase" || choice == "UPPERCASE"){
 transform(str.begin(), str.end(), str.begin(),::toupper);
 cout << str <<endl;
 }
 else if (choice == "lowercase" || choice == "LOWERCASE"){
 transform(str.begin(), str.end(), str.begin(),::tolower);
 cout << str <<endl;
 }
 else 
 {
 cout << "Invalid" <<endl;
 }
 return 0;
 }
 
   
