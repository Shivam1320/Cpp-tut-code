// variables scope only between code blocks i.e, {}
//Global Vriabe - can be used anywhere in file
//Local Variable - only used between code blocks


#include<iostream>
using namespace std;

int global_variable = 420; //Bad Practice

int main(){
    //declaration
    int a;
    //initialozation
    int Local_variable = 5; //Good Practice
    //updation
    Local_variable = 10;

    cout<< global_variable <<endl;

    if(true){
        int b = 15;
        cout<< b <<endl;
        cout<< global_variable <<endl;
    }
    cout<< Local_variable << endl;

  return 0;
}