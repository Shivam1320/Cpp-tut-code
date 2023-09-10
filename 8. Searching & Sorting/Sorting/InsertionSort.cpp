//Insertion Sort

#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int>arr){
    int n = arr.size();

    //Insertion Sort
    for(int i = 1; i< n; i++){
        //step 1 -> fetch
        int val = arr[i];
        //Step 2 -> compare
        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] > val){
                //Step 3 -> shift
                arr[j + 1] = arr[j];
            }
            else{
                //rukna hai
                break;
            }
        }
        //Step 4 -> Copy
        arr[j+1] = val;
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