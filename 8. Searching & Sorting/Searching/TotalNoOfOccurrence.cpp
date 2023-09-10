//Total Number occurrence in an Array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//function for first occurrence
int firstOccurrence(vector<int>v, int target){
    int start = 0;
    int end = v.size() - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while( start <= end){
        if(v[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else if(target < v[mid]){
            end = mid - 1;
        }
        else if(target > v[mid]){
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans; 
}

//function for last occurrence
int lastOccurrence(vector<int>v, int target){
    int start = 0;
    int end = v.size() - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while( start <= end){
        if(v[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if(target < v[mid]){
            end = mid - 1;
        }
        else if(target > v[mid]){
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans; 
}

int main(){
    vector<int>v{1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 6, 7, 8, 9};
    int target = 4;

    int ans1 = firstOccurrence(v, target);
    cout<< "first occurrence is at "<< ans1 << " index "<<endl;

    int ans2 = lastOccurrence(v, target);
    cout<< "last occurrence is at "<< ans2 << " index "<<endl;

    int total = ans2 - ans1 + 1;
    cout<< "Total Number of Occurrence is: " <<total <<endl;


return 0;
}

