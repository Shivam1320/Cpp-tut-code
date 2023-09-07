#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Marks: ";
    cin>>marks;

    if(marks >=90){
        cout<<"A grade";
    }
    else if(marks>=80){
        cout<<"B grade";
    }
    else if(marks>=60){
        cout<<"C grade";
    }
    else {
        cout<<"F grade";
    }
  return 0;
}