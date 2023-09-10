//Linear Search
//Time Complexity - O(n)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;
    cout<<"Enter the value of key: ";
    cin>>key;

    bool flag = 0;

    for(int i = 0; i<9; i++){
        if(arr[i] == key){
          flag = 1;
          break;
        }
    }
    if(flag)
    cout<<"Key is present" <<endl;
    else
    cout<<"key is absent"<<endl;

return 0;
}