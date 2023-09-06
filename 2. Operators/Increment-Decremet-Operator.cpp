// a++ (Post Increment) --> first use then Increment
// ++a (Pre Increment) --> first Increment then use
// A-- (Post Decrement) --> first use then Decrement
// --A (Pre Decrement) --> first Decrement then use

#include<iostream>
using namespace std;
int main(){

    // int a = 5;
    // cout << a++<<endl;
    // cout << ++a<<endl;
    // cout << a--<<endl;
    // cout << --a<<endl;

    // int a = 6;
    // int c = ++a + 1;
    // cout<< c <<endl;

    int a = 5;
    cout<< (++a) * (++a) <<endl; //output compiler dependent


  return 0;
}