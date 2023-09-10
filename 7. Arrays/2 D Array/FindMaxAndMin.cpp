//Find Maximum Number In 2D array

#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

//function to find Maximum number
void findMax(int arr[][3], int row, int col){
    int maxi = INT_MIN;

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            } 
        }
    }
    cout<<"Maximum number is: "<< maxi <<endl;
}

//Function to find Minimum Number
void findMin(int arr[][3], int row, int col){
    int mini = INT_MAX;

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            } 
        }
    }
    cout<<"Minimum number is: "<< mini <<endl;
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
    
    findMax(arr, 3, 3);
    findMin(arr, 3, 3);

return 0;
}