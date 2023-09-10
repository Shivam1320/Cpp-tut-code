//Linear Search In 2D array

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int arr[4][3] = { {1, 2, 3}, {2, 3, 4}, {5, 6, 1}, {9, 9, 1} };

//     int key;
//     cout<<"Enter the value of key:";
//     cin>>key;

//     bool flag = 0;

//     for(int i = 0; i<4; i++){
//         for(int j = 0; j<3; j++){
//             if( arr[i][j] == key ){
//                 flag = 1;
//                 break;

//             }
//         }
//     }
//     if(flag)
//     cout<<"Present"<<endl;
//     else 
//     cout<<"NOt Present"<<endl;
// return 0;
// }

//Linear Search in 2D array using function and take input from user

#include <iostream>
#include <vector>
using namespace std;

bool findKey(int arr[][3], int row, int col, int key){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == key)
            return true;
        }
    }
    return false;
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

    int key = 4;

    if(findKey(arr, 3, 3, key)){
        cout<<"Present";
    }
    else
    cout<<"false";

return 0;
}