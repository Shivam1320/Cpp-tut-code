//Pair Sum - Using one array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr{10, 20, 40, 60, 70, 30};
    int sum = 100;

    //print all pairs
    for(int i = 0; i<arr.size(); i++){
        int element = arr[i];

        for(int j = i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == sum ){
                cout<<"Pair found: "<<"(" << element << "," << arr[j] <<")" << endl;
            }
            //cout<< "(" << element << "," << arr[j] <<")" << endl;
        }
    }

return 0;
}


//Pair Sum - Using two array