#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    char c;
    cout<< "Enter a string: ";
    cin >>s;
    cout<<"Character to search ";
    cin>>c;
    cout << " " << count(s.begin(), s.end(), c);
    return 0;
}
    
