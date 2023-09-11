//Character Arrays

#include <iostream>
#include <vector>
#include<cstring>
using namespace std;

//function to get length of char array
int getLenght(char name[]) {
    int length = 0;
    int i = 0;

    while(name[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

//function to reverse a String
void reverseCharArray(char name[]) {
    int i = 0;
    int n = getLenght(name);
    int j = n - 1;

    while(i <= j) {
        swap(name[i], name[j]);
        i++;
        j--;
    }

}

int main(){
//     char name[20];
//    // cin>>name;
//     cin.getline(name, 20); //read all the input upto 20 length

//     cout<<name;

    // char arr[50];

    // cin >> arr[3];
    // cin >> arr[50];
    // cin.getline(arr, 50); 
    // char arr1[20];
    // //cin>>arr1;
    // cin.getline(arr1, 20);
    // cout<< "lenght is: " <<getLenght(arr1) <<endl;

    // cout<< "lenght is --> " << strlen(arr1) <<endl;  //function to get length of char array


    // //reverse a String
    // char arr[20];
    // cout<<"Enter your name: ";
    // //cin>>arr;
    // cin.getline(arr, 20);

    // for(int i = strlen(arr); i>= 0; i--){
    //     cout<<arr[i] <<" ";
    // }
    // cout<<endl;


    //reverse using function
    char name[20];
    cin.getline(name, 20);
    reverseCharArray(name);
    cout<<name<<endl;


    

return 0;
}