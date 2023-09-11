//Convert lowercase into Uppercase

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

////convert into Uppercase
void convertIntoUppercase (char word[] ) {
    int n = strlen(word);
    for(int i = 0; i<n; i++){
        if(word[i] >= 'a' && word[i] <= 'z')
             word[i] = word[i] - 'a' + 'A';
    }
}

//convert into lowercasse
void convertIntoLowercase(char word[] ) {
    int n = strlen(word);
    for(int i = 0; i<n; i++){
        if(word[i] >= 'A' && word[i] <= 'Z')
             word[i] = word[i] - 'A' + 'a';
    }
}


int main(){
    char word1[20];
    cout<<"Enter your word in lowercase: ";
    cin>>word1;

    convertIntoUppercase(word1);
    cout<<"Converted In Uppercase: " << word1 <<endl;


    char word2[20];
    cout<<"Enter your word in UPPERCASE: ";
    cin>>word2;

    convertIntoLowercase(word2);
    cout<<"Converted In Lowercase: " << word2 <<endl;
return 0;
}