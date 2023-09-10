// Linear Search

// My try --- fir se try kr le bsdk
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {2, 4, 5, 7, 8, 9, 0, 1, 4, 5};
    int key;
    cout << "Enter the key: ";
    cin>>key;

    bool found = 0;
    
    for(int i = 0; i < 10; i++){
        if (arr[i] == key){
            found = 1;
            break;
        }
    }
    if(found)
    cout<<"Present";
    else
    cout<<"Absent";

  return 0;
}



//Love babbar - without FUnction
// #include<iostream>
// using namespace std;


// int main(){
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int size = 7;

//     int key = 3;

//     bool flag = 0;


//     for(int i  = 0; i<size; i++){
//         if(arr[i] == key){
//             flag = 1;
//             break;

//         }
//     }
//     if(flag)
//     cout<<"Present"<<endl;
//     else 
//     cout<<"NOt Present"<<endl;


//   return 0;
// }