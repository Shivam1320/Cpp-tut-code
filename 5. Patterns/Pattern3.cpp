//Hollow Rectangle
/*
        * * * * * 
        *       * 
        * * * * * 
*/

#include<iostream>
using namespace std;

int main(){


    // for(int row = 0; row<3; row++){
    //     if(row == 0 || row == 2){
    //         for(int col = 0; col<5; col++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         cout<<"* ";
    //         for(int col = 0; col<6; col++){
    //             cout<<" "; 
    //         }
    //         cout<<"* ";
    //     }
    // cout<<endl;
    // }

    int rowCount, colCount;

    cout<<"Enter Row: ";
    cin>>rowCount;

    cout<<"Enter Col: ";
    cin>>colCount;

    for(int row = 0; row<rowCount; row++){
        if(row == 0 || row==rowCount-1){
            for(int col = 0; col<colCount; col++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int i = 0; i<colCount-2; i++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }



  return 0;
}