// Binary Search using recursion

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& v, int s, int e, int& key) {
    //base Case
    if(s > e) {
        return -1;
    }
    int mid = (s+e) / 2;

    //case 2 --> key found
    if(v[mid] == key) {
        return mid;
    }

    if(v[mid] < key) { // v[mid] < key --> right search
        return binarySearch(v, mid+1, e, key);
    }
    else { // v[mid] > key --> left Search
        return binarySearch(v, s, mid-1, key);
    }
}

int main(){
    vector<int>arr{10, 20, 30, 40, 50, 60, 70};
    int target = 10;

    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end) / 2;

    int ans = binarySearch(arr, start, end, target);
    cout << "Answer is " << ans << endl;

return 0;
}