// Print the Sum of columns
#include <iostream>
#include <vector>
using namespace std;

void sumCol(int arr[][3], int rows, int cols){
    for(int i = 0; i<rows; i++){
        int sum = 0;
        for(int j = 0; j<cols; j++){
            sum += arr[j][i];
        }
        cout<< sum <<endl;
    }
}

int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout<<"Enter the elements of array Row-wise"<<endl;

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    // //printing
    // for(int i = 0; i<rows; i++){
    //     for(int j = 0; j<cols; j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

   sumCol(arr, 3, 3);
    
return 0;
}