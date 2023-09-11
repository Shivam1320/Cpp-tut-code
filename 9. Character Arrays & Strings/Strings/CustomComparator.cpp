//Custom Comparator

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//Custom Comparator
// for character
bool cmp(char x, char y){
    return x > y;
}

//for interger
bool compare(int x, int y){
    return x > y;
}
int main(){
    // string word  = "babbar";
    // sort(word.begin(), word.end(), cmp);
    // cout<<word;

    vector<int>v{3, 2, 4, 5, 1};
    
    sort(v.begin(), v.end(), compare);

    for(auto i:v){
        cout << i << " ";
    }
    cout << endl;
return 0;
}