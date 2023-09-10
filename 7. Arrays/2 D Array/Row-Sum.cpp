//Print the Sum of Rows

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[4][3] = { {1, 2, 3}, {2, 3, 4}, {5, 6, 1}, {9, 9, 1} };

    for(int i = 0; i<4; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum += arr[i][j];

        }
        cout<< "Sum of rows is: "<< sum;
        cout<<endl;
    }
return 0;
}


//Same code using function and take input from user

// #include <iostream>
// #include <vector>
// using namespace std;

// void sumRow(int arr[][3], int rows, int cols){
//     for(int i = 0; i<rows; i++){
//         int sum = 0;
//         for(int j = 0; j<cols; j++){
//             sum += arr[i][j];
//         }
//         cout<< sum <<endl;
//     }
// }

// int main(){
//     int arr[3][3];
//     int rows = 3;
//     int cols = 3;

//     cout<<"Enter the elements of array Row-wise"<<endl;

//     for(int i = 0; i<rows; i++){
//         for(int j = 0; j<cols; j++){
//             cin>>arr[i][j];
//         }
//         cout<<endl;
//     }

//     // //printing
//     // for(int i = 0; i<rows; i++){
//     //     for(int j = 0; j<cols; j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     sumRow(arr, 3, 3);
    



// return 0;
// }