// #include <iostream>
// #include <stack>
// using namespace std;

// void insertSorted(stack<int> &st, int target) {
//     //base case
//     if(st.empty()) {
//         st.push(target);
//         return;
//     }
//     if(st.top() >= target) {
//         st.push(target);
//         return;
//     }

//     int topElement = st.top();
//     st.pop();

//     //recursive call
//     insertSorted(st, target);

//     //Backtrack
//     st.push(topElement);
// }

// int main(){
//     stack<int>st;

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     int target = 25;
//     insertSorted(st, target);

//     cout << "Stack after added element: " << endl;
//     while(!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }


// return 0;
// }



#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int>& st, int target) {
    // base case
    if (st.empty() || st.top() >= target) {
        st.push(target);
        return;
    }

    int topElement = st.top();
    st.pop();

    // recursive call
    insertSorted(st, target);

    // Backtrack
    st.push(topElement);
}

int main() {
    stack<int> originalStack;

    originalStack.push(10);
    originalStack.push(20);
    originalStack.push(30);
    originalStack.push(40);
    originalStack.push(50);

    int target = 25;
    stack<int> modifiedStack = originalStack; // Make a copy

    insertSorted(modifiedStack, target);

    cout << "Stack after added element: " << endl;
    while (!modifiedStack.empty()) {
        cout << modifiedStack.top() << " ";
        modifiedStack.pop();
    }

    return 0;
}
