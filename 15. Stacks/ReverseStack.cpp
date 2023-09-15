// Reverse Stack

#include <iostream>
#include <stack>
using namespace std;

void insertAtBotttom(stack<int> &s, int target) {
        //base case
        if(s.empty()){
            s.push(target);
            return;
        }

        int topELement = s.top();
        s.pop();

        //recursive call
        insertAtBotttom(s, target);

        //BackTrack
        s.push(topELement);
}

void reverseStack(stack<int> &s) {
        if(s.empty()) {
            return;
        }

        int target = s.top();
        s.pop();

        //reverse stack
        reverseStack(s);
        //inert at bottom target ko
        insertAtBotttom(s, target);
}

int main(){
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    //cout << "Stack before reverse: " << endl;
    // while(!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;

    reverseStack(s);

    cout << "Stack after reverse: " << endl;
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }


return 0;
}