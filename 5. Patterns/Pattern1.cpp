 //Solid Rectangle
 /*
            * * * * * 
            * * * * * 
            * * * * *
 */
 

 //Static Code
 #include<iostream>
 using namespace std;

 int main(){
    // i denotes row & j denotes column
    for(int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
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
    for(int j = 0; j<n + 1; j++){
      cout<<"* ";
    }
    cout<<endl;
  }

    return 0;
}