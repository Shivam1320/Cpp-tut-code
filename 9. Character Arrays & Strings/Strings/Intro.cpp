//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool comapreString(string a, string b) {
    if(a.length() != b.length()){
        return false;
    }
    else{
        for(int i = 0; i<a.length(); i++) {
            if(a[i] != b[i]) {
                return false;
            }
        }
    }
    return true;
}

int main(){
    //String Create
    // string str; // method 1
    // string word = "Ram"; // method 2
    //string input
    //cin >> str;
    //getline(cin, str);

    //print
    //cout << str;


    //Some basic function of String
    // cout << "length: " << str.length() << endl;   ///str.length()-- > gives length of the string
    // cout << "isEmpty: " << str.empty() << endl;   ///str.empty() -- > shows string empty or not

    // str.push_back('A'); // push an char to the end of string
    // str.pop_back(); // pop an char from the end of string

   // cout<< str.substr(1, 3) <<endl;  // Prints substring of the string ---> doesn't change in original string


   //Compare Function
//    string str1 = "Shivam";
//    string str2 = "Kumar";

    // if(a.compare(b) == 0) {   // if output is 0 --> excatly same string
    //                           // if output is != 0 --> different string
    //     cout<<" a and b are exactly same string" <<endl;
    // }
    // else{
    //     cout<<" a and b are not same string" <<endl;
    // }


    //find function
    // string sen = "my name is Shivam Kumar";
    // string target = "shivam";

    // cout<< sen.find(target) <<endl;   // find function search a string in oyer string
    //                                   // if found --> returns the start index of that string
    //                                   // if not found --> returns the snpos value.

    // if(sen.find(target) == string::npos) {
    //     cout<<"not found" <<endl;
    // }


    // // Replace function
    // string str = "this is my first message";
    // string word = "babbar";

    // str.replace(0, 4, word);
    // cout << str << endl;



    // Erase function
    string str = "this is my first message";

    str.erase(0, 4);
    cout << str << endl;


return 0;
}