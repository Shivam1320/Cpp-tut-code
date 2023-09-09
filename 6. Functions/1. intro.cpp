//Functions --> linked with a well-defined task.

#include<iostream>
using namespace std;

//defining function
void printName(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i = 0; i<n; i++){
        cout<<"Shivam" <<endl;
    }
}

int main(){
    //function calling
    printName();


  return 0; //here 0 defines program has executed successfully and is returning a status value of 0 to the operating system or calling process.
}