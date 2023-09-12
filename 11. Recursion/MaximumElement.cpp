//Find MAximum elements in array using recursion

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi) { //here maxi is pass by value, so it doesn't give correct answer
                                                  // we use pass by reference, by adding '&' operator
    //base case
    if( i >= n) {
        return;
    }

    //solving 1 case
    if(arr[i] > maxi){
        maxi = arr[i];
    }
   // maxi = max(arr[i], maxi); ---> method to find maximum

    // recursive relation
    findMax(arr, n, i+1, maxi);
}

int main(){
    int arr[8] = {2, 4, 6, 8, 12, 45, 23, 54};
    int n = 8;

    int maxi = INT_MIN;
    int i = 0;

    findMax(arr, n, i, maxi);
    cout << "Maximum element is: " << maxi;
return 0;
}