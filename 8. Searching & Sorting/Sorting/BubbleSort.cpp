//Bubble Sort

#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int>arr){
    int n = arr.size();

    //Bubble Sort
    for(int i = 1; i< n; i++){
        bool swapped = false;
        for(int j = 0; j<n - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
    if(swapped == false){
        //sort ho chuka hai, no need to check in further rounds
        break;
    }
    }

    //Printing the new sorted arr
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i] <<" ";
    }
}


int main(){
    vector<int>nums{10, 1, 7, 6, 14, 9};

    cout<<"before Sorting"<<endl;
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    cout<<"After Sorting"<<endl;
    selectionSort(nums);
return 0;
}