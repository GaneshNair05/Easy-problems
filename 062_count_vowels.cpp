#include <iostream>
#include <string>
using namespace std;
//Function to check for vowels
bool isVowel(char vowel) {
    vowel= tolower(vowel);
     return (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u');
}
//Function to count vowels 
int countVowels(string s, int num){
    if (num == 0) {
        return isVowel(s[0]);
    }
    return countVowels(s, num-1 ) + isVowel(s[num]);
}  
//Main function aka driver code 
int main() {
  string s; 
  cout << "Enter a string: ";
  cin >> s;
  int length = s.length();
   cout << "Vowels in " << s << ": ";
  cout << countVowels(s, length -1 )<<endl;
    return 0;
}
  


