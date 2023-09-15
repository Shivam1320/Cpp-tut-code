#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void reverseUsingstack(string str) {
    stack<char>st;

    for(int i = 0; i<str.length(); i++){
        st.push(str[i]);
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

int main(){
    string str = "Hello World";
    reverseUsingstack(str);

return 0;
}