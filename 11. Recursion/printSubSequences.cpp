// Print SubSequences of a String --> Using Recursion

#include <iostream>
#include <vector>
using namespace std;

void printSubSequences(string str, string output, int i, vector<string>& v) {
    //base case
    if(i >= str.length() ) {
        //cout << output << endl;
        v.push_back(output);
        return;
    }

    //exclude case -> print as it is and do i+1
    printSubSequences(str, output, i+1, v);

    //include case -> first store and do i+1 the print
    output.push_back(str[i]);
    printSubSequences(str, output, i+1, v);
}

int main(){
    string str = "abc";
    string output = "";
    int i = 0;
    vector<string>v;

    printSubSequences(str, output, i, v);

    //printing all Subsequences
    cout << "Printing all Subsequences" << endl;
    for(auto val: v) {
        cout << val << " ";
    }

    cout << endl <<"Size of the resultant vector is: " << v.size() << endl;
    cout <<"(answer is always +1 because empty string is also included)";
return 0;
}