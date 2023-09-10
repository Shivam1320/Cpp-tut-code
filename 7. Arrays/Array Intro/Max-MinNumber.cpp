//Find Maximum and Minimum Number in array

#include <iostream>
#include<limits.h>
using namespace std;

int main(){
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;

  int maxi = INT_MIN;
  int mini = INT_MAX;
  for(int i = 0; i < size; i++) {
    if(arr[i] > maxi){
        maxi = arr[i];
    }
    if(arr[i] < mini){
        mini = arr[i];
    }
  }
  cout<<"maximum Number is: " << maxi <<endl;
  cout<<"minimum Number is: " << mini <<endl;
return 0;
}