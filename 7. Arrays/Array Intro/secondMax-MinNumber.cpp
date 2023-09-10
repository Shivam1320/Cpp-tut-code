//Second maximum and minimum number in an array

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int arr[] = { 10, 5, 8, 3, 7, 2, 6, 9, 1, 4 };
    int size = 10;
    int maxi1 = INT_MIN;
    int maxi2 = INT_MIN;
    int mini1 = INT_MAX;
    int mini2 = INT_MAX;

    for (int i = 0; i < size; i++) {
        // Find the maximum and second maximum values
        if (arr[i] > maxi1) {
            maxi2 = maxi1;
            maxi1 = arr[i];
        } 
        else if (arr[i] < maxi1 && arr[i] > maxi2) {
            maxi2 = arr[i];
        }

        // Find the minimum and second minimum values
        if (arr[i] < mini1) {
            mini2 = mini1;
            mini1 = arr[i];
        } else if (arr[i] > mini1 && arr[i] < mini2) {
            mini2 = arr[i];
        }
    }

    cout << "Second Maximum: " << maxi2 << endl;
    cout << "Second Minimum: " << mini2 << endl;

    return 0;
}
