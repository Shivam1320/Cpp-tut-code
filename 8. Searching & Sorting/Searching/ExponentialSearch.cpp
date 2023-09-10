//Exponential Search  ---> Also knnow as doubling Search / galloping search / Struzik search
//Condition for Exponential search - Array must be in monotonic order i,e. Must be in Ascending or Descending order
//Time Complexity



#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int a[], int start, int end, int x) {
    while (start <= end){
        int mid = start + (end - start) / 2;
        if(a[mid] == x){
            return mid;
        }
        else if(x > a[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

// Functioin for Exponential Search
int expSearch(int a[], int n, int x) {
    if(a[0] == x) return 0;

    int i = 1;
    while(i< n && a[i] <= x) {
        i *= 2;
    }
    return binarySearch(a, i/2, min(i, n-1), x);
}


int main(){
    int a[] = {3, 4, 5, 6, 7, 11, 13, 14, 15, 56, 70};
    int n = sizeof(a) / sizeof(int);
    int x = 13;

    int ans = expSearch(a, n, x);
    cout<<"found at index: " << ans;

return 0;
}