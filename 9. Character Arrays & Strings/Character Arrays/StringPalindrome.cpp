//Check Palindrome

#include <iostream>
#include <vector>
#include<cstring>
using namespace std;

bool checkPalindrome(char arr[] ) {
    int n = strlen(arr);
    int i = 0;
    int j = n - 1;

    while( i <= j){
        if(arr[i] != arr[j]) {
            return false;
        }
        else{
            ++i;
            --j;
        }
    }
    return true;
}


int main(){
    char name[20];
    cout<<"Enter Your word: ";
    cin.getline(name, 20);


    if(checkPalindrome(name) == true){
        cout<< name <<" Is a Palindrome"<<endl;
    }
    else{
        cout<< name <<" Not a Palindrome"<<endl;
    }
return 0;
}