#include<iostream>
#include <vector>

using namespace std;
int main(){
    // //initialising vector - method 1
    // vector<int> arr;
    // //insert elements
    // arr.push_back(5);
    // arr.push_back(6);
    // //printing
    // for(int i = 0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    //   // initialising vector - method 2
    //   //initialising all elemets with same value
    //   vector<int> arr(5, 1);
    //   //printing elements
    //       for(int i = 0; i<arr.size(); i++){
    //        cout<<arr[i]<<" ";
    // }

    
    //  // //initialising vector - method 3
    //  //taking elements from user
    //  int n;
    //  cout<<"Enter the size of array: ";
    //  cin>>n;
    // //create array
    //  vector<int> arr(n);
    //  //taking input
    //  for(int i = 0; i<n; i++){
    //   cin>>arr[i];
    //  }
    //  //print
    //  for(int i = 0; i<arr.size(); i++){
    //   cout<<arr[i]<<" ";
    //  }


    //  // //initialising vector - method 4
    //  //taking size from user and printing the elements of own
    //  int n;
    //  cout<<"Enter the size of array: ";
    //  cin>>n;
    // //create array
    //  vector<int> arr(n, 1);

    //  //print
    //  for(int i = 0; i<arr.size(); i++){
    //   cout<<arr[i]<<" ";
    //  }

    
    //  //initialising vector - method 5
    //  //adding elements on your own
    // //create array
    //  vector<int> arr{1, 2, 3, 4, 5};

    //  //print
    //  for(int i = 0; i<arr.size(); i++){
    //   cout<<arr[i]<<" ";
    //  }



    //Some basic function of Vector
    vector<int> arr;
    //insert elements
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    //remove element from array
    arr.pop_back(); //it remove element from last
    //display occupied space
    cout<< arr.size()<<endl;
    //display total capacity of array
    cout<< arr. capacity()<<endl;
    //check vector empty or not
    //This function returns true(1) if the vector is empty and false(0) otherwise
    cout<<"Empty or Not "<< arr.empty() <<endl;
    //This function is used to remove all elements from a vector
    arr.clear();



  return 0;
}