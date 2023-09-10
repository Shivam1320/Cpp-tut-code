#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(int arr[], int n){
    int ans = 1;
    for(int i = 1; i<n; i++){
        if(arr[i] != arr[i-1]){
            arr[ans] = arr[i];
            ans++;
        }
    }
    return ans;
}

int main(){
    int nums[5] = {2, 2, 2, 2, 2};

    removeDuplicate(nums, 5);

    int result = removeDuplicate(nums, 5);

    cout<<result;
return 0;
}