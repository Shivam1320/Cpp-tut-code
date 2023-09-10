//Double the array

#include <iostream>
#include<math.h>
using namespace std;
int main()
{    
    int n;
    cout<<"Enter number of Elements: ";
    cin>>n;
    int arr[n];
    
    int temp[20];

    //taking inputs from user
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //printing original array
    cout<<"Original Array : " << endl;
    for(int i = 0; i< n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;

    //double the array
    for(int i = 0; i < n; i++){
        temp[i] = 2 * arr[i];
    }

    //printing array
    cout<<"Array ater double : " <<endl;
    for(int i = 0; i< n; i++){
        cout<< temp[i]<<" ";
    }
return 0;
}

