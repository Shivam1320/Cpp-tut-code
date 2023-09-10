//Transpose 2D array/Matrix

//NOT WORKING PROPERLY - NEED TO CHECK

#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

#include <iostream>
using namespace std;

// Function to transpose a matrix
void transpose(int mat[][3], int transposed[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = mat[i][j];
        }
    }
}

//Function to Print Matrix
int printMatrix(int arr[][3]){
    for(int i = 0; i<4; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int mat[4][3], transposed[3][4];
    int row = 4;
    int col = 3;

    // Input the matrix from user
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    //Printing before transpose
    printMatrix(arr);
    // Calculating Transpose
    transpose(mat, transposed);

    //Printing Transpose
    cout << "Transpose of the matrix is:" << endl;

    int ans = printMatrix(transposed);
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cout << transposed[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
