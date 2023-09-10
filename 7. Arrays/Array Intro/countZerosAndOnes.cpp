//Count 0's and 1's in array


#include<iostream>
using namespace std;


// int main(){

//     int arr[] = {1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1};

//     int size = 15;

//     int numZero = 0;
//     int numOne = 0;

//     for(int i = 0; i<size; i++){
//         if(arr[i] == 0){
//             numZero++;
//         } 
//         if(arr[i] == 1){
//             numOne++;
//         }
//     }

//     cout<<"Number of zeroes "<<numZero<<endl;
//     cout<<"Number of Ones "<<numOne<<endl;


//   return 0;

// }

void count(int arr[], int size){

    int numZero = 0;
    int numOne = 0;

    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            numZero++;
        } 
        if(arr[i] == 1){
            numOne++;
        }
    }

    cout<<"Number of zeroes "<<numZero<<endl;
    cout<<"Number of Ones "<<numOne<<endl;


}

int main(){

    int arr[] = {1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1};
    count(arr, 15);
}