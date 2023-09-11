// Replace all the Spaces with ' @ '

#include <iostream>
#include <vector>
#include<cstring>
using namespace std;

void replaceSpaces(char arr[]) {
    int n  = strlen(arr);
    for(int i = 0; i < n; i++){
        if(arr[i] == ' ') {
            arr[i] = '@';
        }
    }
}

int main(){
    char name[20];
    cin.getline(name, 20);
    replaceSpaces(name);

    cout<<name;

return 0;
}