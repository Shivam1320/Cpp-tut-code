#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    //creation
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //deletion
    st.pop();

    //peek
    cout << "Element on top is: " << st.top() << endl;

    //No. of elements
    cout << "No. of Elements in stack is : " << st.size() << endl;

    //check empty
    cout << "check stack is empty or not: " << st.empty() << endl;

    //printing stack --> in this case stack becomes empty -> becuse we can only access the top item in stack

    cout << "printing items in stack "<< endl;
    while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
    }
return 0;
}