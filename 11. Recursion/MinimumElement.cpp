//Find Minimum elements in array using recursion

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void findMin(int arr[], int n, int i, int& mini) { //here mini is pass by value, so it doesn't give correct answer
                                                  // we use pass by reference, by adding '&' operator
    //base case
    if( i >= n) {
        return;
    }

    //solving 1 case
    if(arr[i] < mini){
        mini = arr[i];
    }
   // mini = min(arr[i], mini); ---> method to find minimum

    // recursive relation
    findMin(arr, n, i+1, mini);
}

int main(){
    int arr[8] = {2, 4, 6, 8, 12, 45, 23, 54};
    int n = 8;

    int mini = INT_MAX;
    int i = 0;

    findMin(arr, n, i, mini);
    cout << "minimum element is: " << mini;
return 0;
}