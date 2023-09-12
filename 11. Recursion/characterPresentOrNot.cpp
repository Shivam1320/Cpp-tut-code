/*

// Check given Character is prsent or not in a String
#include <iostream>
#include <vector>
using namespace std;

bool checkKey(string str, int n, int i, char key) {
    //base case
    if ( i >= n) {
        return false;
    }

    // solve 1 case
    if(str[i] == key) {
        return true;
    }

    //baki recursion sambhal lega
    return checkKey(str, n, i+1, key);
}

int main(){
    string str = "ShivamKumar";
    int n = str.length();

    char key = 'u';
    int i = 0;

    bool ans = checkKey(str, n, i, key);
    cout << "Answer is (in 0/1): " << ans;


return 0;
}

*/

//----------------------------------------------------------------------------------------------------//

/*

// Check given Character is prsent on what index in a String, if not present return -1;
#include <iostream>
#include <vector>
using namespace std;

int checkKey(string str, int n, int i, char key) {
    //base case
    if ( i >= n) {
        return -1;
    }

    // solve 1 case
    if(str[i] == key) {
        return i;
    }

    //baki recursion sambhal lega
    return checkKey(str, n, i+1, key);
}

int main(){
    string str = "ShivamKumar";
    int n = str.length();

    char key = 'S';
    int i = 0;

    int ans = checkKey(str, n, i, key);
    cout << "key present at index: " << ans;

return 0;
}
*/



//----------------------------------------------------------------------------------------------------//

/*
// Check given Character is prsent on what index in a String (print all the occurrences), if not present return -1;
#include <iostream>
#include <vector>
using namespace std;

void checkKey(string str, int n, int i, char key) {
    //base case
    if ( i >= n) {
        return;
    }

    // solve 1 case
    if(str[i] == key) {
        cout << "Found at index: " << i <<endl;
    }

    //baki recursion sambhal lega
    return checkKey(str, n, i+1, key);
}

int main(){
    string str = "ShivamKumar";
    int n = str.length();

    char key = 'm';
    int i = 0;
    
    checkKey(str, n, i, key);

return 0;
}
*/

//----------------------------------------------------------------------------------------------------//

// Check given Character is prsent on what index in a String (print all the occurrences), if not present return -1;
// Store all the answer in vector
#include <iostream>
#include <vector>
using namespace std;

void checkKey(string str, int n, int i, char key, vector<int>& ans) {
    //base case
    if ( i >= n) {
        return;
    }

    // solve 1 case
    if(str[i] == key) {
        ans.push_back(i);
    }

    //baki recursion sambhal lega
    return checkKey(str, n, i+1, key, ans);
}

int main(){
    string str = "ShivamKumar";
    int n = str.length();

    char key = 'm';
    int i = 0;

    vector<int>ans;
    
    checkKey(str, n, i, key, ans);

    //printing elemnts of vectior
    cout <<"key present at indexex: ";
    for(auto val: ans) {
        cout << val << " ";
    }
    cout << endl;

return 0;
}
