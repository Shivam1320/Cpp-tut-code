//Intersection of two arrays

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[6]={2, 3, 4, 7, 9, 8};

    vector<int> ans;

    for (int i = 0; i < 5; i++){
        int element = arr1[i];
        for(int j = 0; j<6; j++){
            if(element == arr2[j]){
                ans.push_back(element);
            }

        }
    }

    cout<<"Array after INTERSECTION: ";
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
return 0;

}