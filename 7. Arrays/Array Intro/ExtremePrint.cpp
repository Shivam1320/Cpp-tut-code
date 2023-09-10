//Extreme Print In an Array

#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(true){
        if(start > end)
        break;

        if(start == end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }

}

int main(){
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    extremePrint(arr, 11);
    
  return 0;
}


// //Method - 2 using for loop
// int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//   int size = 11;

//   int start = 0; 
//   int end = size - 1;

//   for(int i = 0; i < size; i++){
//     //stop case
//     if(start > end){
//         break;
//     }

//     //start and end equal case
//     if(start == end){
//         cout<<arr[start] << " ";
//     }

//     //regular case
//     else{
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";
//     }
//     start++;
//     end--;
//   }