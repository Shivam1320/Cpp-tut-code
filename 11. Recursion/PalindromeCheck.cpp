// Check Palindrome

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string& s, int start, int end) {
    //base case
    if(start >= end) {
        return true;
    }

    //1 case solution
    if(s[start] != s[end] ) {
        return false;
    }

    // recursion sambhal lega
   return isPalindrome(s, start + 1, end - 1);
}

int main(){
    string str;
    cout << "Enter the String: ";
    cin >> str;

    int start = 0;
    int end = str.size() - 1;

    if(isPalindrome(str, start, end)) {
        cout << "Yes, it is a Palindrome";
    }
    else {
        cout << "No, it is not a Palindrome";
    }

return 0;
}