//Solid Square
/*
        * * * * 
        * * * * 
        * * * * 
        * * * * 
*/




//Static Code
#include<iostream>
using namespace std;
int main(){

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

  return 0;
}


//Dynamic Code
#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      cout<<"* ";
    }
    cout<<endl;
  }

    return 0;
}