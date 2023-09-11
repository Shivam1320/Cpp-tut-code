// Convert characters of a string to opposite case

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void convertCase(char word[] ) {
    int n = strlen(word);

    for(int i = 0; i<n; i++){
        if(word[i] >= 'A' && word[i] <= 'Z' ){
            word[i] = word[i] - 'A' + 'a';
        }
        else{
            word[i] = word[i] - 'a' + 'A';
        }
    }
}

int main(){
    char word[20];
    cout<<"Enter the Word: ";
    cin>>word;

    convertCase(word);
    cout<< word;

return 0;
}
