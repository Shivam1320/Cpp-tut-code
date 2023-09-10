//Binary Search
//Condition for binary search - Array must be in monotonic order i,e. Must be in Ascending or Descending order
//Time Complexity

#include <iostream>
#include <algorithm>  //add to use predefined algo of binary search
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    //int mid = (start + end) / 2; //don't use this formula because Integer Overflow can happen
    int mid = start + (end - start) / 2; //use this formula

    while(start <= end){
        int element = arr[mid];

        if(element == key){
            return mid;
        }
        else if(key < element){
            //search left
            end = mid - 1;
        }
        else{
            //search right
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}


int main(){
    int arr[] = {2, 4, 6, 7, 8, 10, 12, 15, 17, 19};
    int size = 10;
    int key = 17;

    int indexOftarget = binarySearch(arr, size, key);

    if(indexOftarget == -1){
        cout<< "target not found " <<endl;
    }
    else{
        cout<< "target found at " << indexOftarget << " index" <<endl;
    }

return 0;
}

/*
Method 2 - using Predefined function
int main(){
    //this way to apply on vector
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(binary_search(arr.begin(), arr.end(), 5)){
        cout<< "Found" << endl;
    }
    else{
        cout << "Not Found" <<endl;
    }

    //this way to apply on array
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    if(binary_search(arr, arr + size, 7)){
         cout<< "Found" << endl;
    }
    else{
        cout << "Not Found" <<endl;
    }

      

    return 0;
}
*/