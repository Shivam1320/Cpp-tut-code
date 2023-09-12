// Find the Last Occurence of Char in a String  ----> USing Recursion

#include <iostream>
#include <vector>
using namespace std;

// Function to Search Left --> Right
void lastOccLTR(string& s, char ch, int i, int& ans) {
    //base Case
    if( i >= s.size()) {
        return;
    }

    // 1 case solve krna hai
    if (s[i] == ch) {
        ans = i;
    }

    //recursive call
    lastOccLTR(s, ch, i+1, ans);

}


// Function to Search Right --> Left
void lastOccRTL(string& s, char ch, int i, int& ans) {
    //base Case
    if( i < 0) {
        return;
    }

    // 1 case solve krna hai
    if (s[i] == ch) {
        ans = i;
        return;
    }

    //recursive call
    lastOccRTL(s, ch, i-1, ans);

}



int main(){
    string str;
    cout << "Enter the String: ";
    cin >> str;

    char ch;
    cout << "Enter the Character to find: ";
    cin >> ch;

    int ans = -1;
    
    //int i = 0;
    //lastOccLTR(str, ch, i, ans);
    
    int i = str.size() - 1;
    lastOccRTL(str, ch, i, ans);
    cout << "Last Occurence of " << ch << " is " << ans;


return 0;
}