// Check wheather the given array is sorted or not using recursion

#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int>& arr, int& n, int i) {
    //base Case
    if(i == n-1){
        return true;
    }

    // 1 case solve karna hai
    if(arr[i+1] < arr[i]) {
        return false;
    }

    // baki recursion dekh lega
    checkSorted(arr, n, i+1);

}

int main(){
    vector<int>arr = {2, 4, 12, 8, 10};
    int n = arr.size();
    int i = 0;

    bool isSorted = checkSorted(arr, n, i);

    if(isSorted) {
        cout << "Array is Sorted" << endl;
    }
    else {
        cout << "Array is not Sorted" << endl;
    }
return 0;
}
