// Find Middle Element in Stack

#include <iostream>
#include <stack>
using namespace std;

void findMiddle(stack<int> &s, int &totalSize) {
        //base case
        if(s.size() == totalSize/2 + 1) {
            cout << "Middle Element is: " << s.top() << endl;
        }
        int temp = s.top();
        s.pop();

       // recursive call
       findMiddle(s, totalSize);

       //backtrack
       s.push(temp);        
}

int main(){
    //creation
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    int totalSize = st.size();
    findMiddle(st, totalSize);

return 0;
}