//House Robber leetcode problem

#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

 void solve(vector<int>& nums, int i, int sum, int &maxi) {
        //basse case
        if( i >= nums.size()) {
            maxi = max(sum, maxi);
            return;
        }
        //include
        solve(nums, i+2, sum+nums[i], maxi);
        //exclude
        solve(nums, i+1, sum, maxi);
    }

int main(){
    vector<int> arr{2,7,9,3,1};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;

    solve(arr, i, sum, maxi);
    cout <<"Maximum sum is: " << maxi << endl;

return 0;
}