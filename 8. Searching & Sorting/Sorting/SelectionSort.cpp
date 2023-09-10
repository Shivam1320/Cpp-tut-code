//Selection Sort

#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int>arr){
    int n = arr.size();

    //selection Sort
    //outer loop --> (n-1) rounds
    for(int i = 0; i< n-1; i++){
        int minIndex = i;
        //inner loop --> index of minimum element in range i -> n
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
            //new minimum, then store
            minIndex = j;
            }
        }
    //swap
    swap(arr[i], arr[minIndex]);
    }

    //Printing the new sorted arr
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i] <<" ";
    }
}


int main(){
    vector<int>nums{3, 5, 2, 3, 5, 7, 9, 3, 4, 5};

    cout<<"before Sorting"<<endl;
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    cout<<"After Sorting"<<endl;
    selectionSort(nums);
return 0;
}