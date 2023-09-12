// Reverse a String Using Recursion

#include <iostream>
#include <vector>
using namespace std;

void revString(string& s, int start, int end) {
    //base case
    if(start >= end) {
        return;
    }

    //1 case solve
    swap(s[start], s[end]);

    //recursion sambhal lega --> Recursive CAll
    revString(s, start+1, end-1);
}

int main(){
    string str;
    cout << "Enter the String: ";
    cin>>str;

    revString(str, 0, str.size()-1 );

    cout << str;

return 0;
}