//Vector In 2D Array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // // Initialize - Method 1
    // vector<vector<int> > arr;

    // // Input Elements
    // vector<int> a{1,2,3};
    // vector<int> b{2,4,6};
    // vector<int> c{1,3,7};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // //Printing array
    // for(int i=0; i<arr.size(); i++){ //To find row use arr.size()
    //     for(int j=0; j<arr[i].size(); j++){ //To find col use arr[0].size() - use it when row and col are same
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // Initialize - Method 2
   // vector<vector<int> > arr(3, vector<int>(5, 0));

    // int row = 3;
    // int col = 5;
    // vector<vector<int> > arr(row, vector<int>(col, 0));

    // //Printing array
    // for(int i=0; i<arr.size(); i++){ //To find row use arr.size()
    //     for(int j=0; j<arr[i].size(); j++){ //To find col use arr[0].size() - use it when no. of col are same
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Initialize all the elements with -8
    int row = 5;
    int col = 5;

    vector<vector<int> > arr(row, vector<int>(col, -8));
    //Printing array
    for(int i=0; i<arr.size(); i++){ //To find row use arr.size()
        for(int j=0; j<arr[i].size(); j++){ //To find col use arr[0].size() - use it when no. of col are same
            // //cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }


return 0;
}