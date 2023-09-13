// Merge Two Sorted Arrays

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr1{1, 2, 3, 4, 5};
    vector<int> arr2{6, 7, 8, 9, 10};
    vector<int>ans;

    for(int i = 0; i < arr1.size(); i++) {
        ans.push_back(arr1[i]);
    }

    for(int i = 0; i < arr2.size(); i++) {
        ans.push_back(arr2[i]);
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

return 0;
}