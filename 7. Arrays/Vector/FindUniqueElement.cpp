//Find Unique Element ---> works only if there are two same type of elements

// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){

//     vector<int> arr{1, 2, 3, 4, 5, 6, 6, 5, 4, 2, 1};
//     int ans = 0;
//     for(int i = 0; i<arr.size(); i++){
//         //ans = ans ^ arr[i];    
//         ans ^= arr[i];
//     }
//     cout<<"Unique element is: "<< ans << endl; 

//   return 0;
// }




//Find Unique Element ---> works only if there are three same type of elements ---> Solving using function and taking input from user

#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>& arr) {
    int ones = 0, twos = 0;
    for(int i = 0; i<arr.size(); i++){
        ones = (ones ^ arr[i]) & ~twos;
        twos = (twos ^ arr[i]) & ~ones;
    }
        return ones;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    cout<<"Enter the Elements of array: ";

    vector<int>arr(n);

    for(int i = 0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement = findUnique(arr);
    cout<<"Unique element is: "<< uniqueElement;

  return 0;
}