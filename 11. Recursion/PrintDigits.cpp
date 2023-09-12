// Print all the digits of a Number Using Recursion

#include <iostream>
#include <vector>
using namespace std;

void printDigits(int n) {
    //base case
    if (n == 0) {
        return;
    }

    // it prints the reverse number
    // //1st case khud solve krna hai
    // int digit = n % 10;
    // cout << digit << " ";

    // //baki recursion dekh lega
    // int newValofN = n / 10;
    // printDigits(newValofN);


    // To overcome the upper problem we use head recursion

    //baki recursion dekh lega
    int newValofN = n / 10;
    printDigits(newValofN);

    //1st case khud solve krna hai
    int digit = n % 10;
    cout << digit << " ";


}

int main(){
    int n = 5234;  //Special Case   -----> 0647 as input
    if(n == 0) {
        cout << 0 << endl;
    }

    printDigits(n);

return 0;
}