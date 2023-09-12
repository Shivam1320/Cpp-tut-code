/*

// print array using recursion or Traverse array using recursion
#include <iostream>
#include <vector>
using namespace std;

void print(int arr[], int n, int i ){
    //base case
    if( i >= n) {
        return;
    }

    cout << arr[i] << " ";

    //recursive relation
    print(arr, n, i+1);

 
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    // //printing using for loop
    // for(int i = 0; i<n; i++) {
    //     cout << arr[i] << " ";
    // }

    //using recursive function
    int i = 0;
    print(arr, 5, 0);



return 0;
}
*/

