// break --> terminates the loop and come outside the loop
// continue --> if want to skip any iteration then use continue


#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;

    // for(int i = 0; i<n; i++){
    //     cout<< "Shivam"<<endl;
    //     break;
    // }
    // cout<<"Kumar";

    int n;
    cin>>n;
    // it does not print Shivam
    for(int i = 0; i<n; i++){
        continue;
        cout<< "Shivam"<<endl;
    }
    cout<<"Kumar";

  return 0;
}