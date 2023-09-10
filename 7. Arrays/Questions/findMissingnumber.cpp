//find missing number


//Time Complexity = O(n)
//Space Complexity = O(1)
 
#include <iostream>
#include <vector>
using namespace std;

void findMissing(int *arr, int n){
    for(int i = 0; i<n; i++){
        int index = abs(arr[i]);
        if(arr[index - 1] > 0){
            arr[index - 1] *= -1;
        }
    }

    for(int i = 0; i<n; i++){
        if(arr[i] > 0){
            cout<<"Missing number is: "<< i+1 <<" " <<endl;
        }
    }
}

int main(){
    int n;
    int arr[] = {1,3,3,4,5,6,6};
    n = sizeof(arr)/sizeof(int);

    findMissing(arr, n);
return 0;
}