//Move all the Negative Elements to one side of the Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>nums{-12, 11, -13, -5, 6, -7, 5, -3, -6};

    // // Method - 1 -----> Using Sort Function --> it sorts the element in ascending order
    //sort(nums.begin(), nums.end());

    // // Using Logic ----> but it didn't sort the function, it only rearrange the elements, negative to positive
    int j = 0; 
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] < 0){
            if( i != j){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }

    //Printing the array
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i] <<" ";
    }
return 0;
}