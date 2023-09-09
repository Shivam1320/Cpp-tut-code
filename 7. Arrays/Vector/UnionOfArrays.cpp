//Union of two arrays - when no duplicates

#include <iostream>
#include <vector>
using namespace std;

int main(){
    //int arr1[5] = {1, 3, 5, 7, 9};
    vector<int> arr1{1, 3, 5, 7, 9};
    //int arr2{2, 4, 6, 8};
    vector<int> arr2{2, 4, 6, 8};

    vector<int> ans;

    //push all elements of arr1 in ans array
    for(int i = 0; i<arr1.size(); i++){
        ans.push_back(arr1[i]);
    }
    //push all elements of arr2 in ans array
    for(int i = 0; i<arr2.size(); i++){
        ans.push_back(arr2[i]);
    }

    //print
    cout<<"Final ans after Union: ";
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

return 0;
}


//Union of two arrays - with Duplicate elements
