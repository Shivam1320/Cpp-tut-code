// Insert Element at Bottom in Stack

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

int main(){
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);


    int target = s.top();
    s.pop();

    insertAtBotttom(s, target);

    cout << "Printing Stack " << endl;

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

return 0;
}



// // Insert Element at Bottom in Stack

// #include <iostream>
// #include <stack>
// using namespace std;

// void solve(stack<int> &s, int target) {
//         //base case
//         if(s.empty()){
//             s.push(target);
//             return;
//         }

//         int topELement = s.top();
//         s.pop();

//         //recursive call
//         solve(s, target);

//         //BackTrack
//         s.push(topELement);
// }

// void insertAtBotttom(stack<int> &s) {
//         if(s.empty()) {
//             cout << "Stack Is Empty" << endl;
//             return;
//         }
//         int target = s.top();
//         s.pop();
//         solve(s, target);

// }

// int main(){
//     stack<int>s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     insertAtBotttom(s);

//     cout << "Printing Stack " << endl;

//     while(!s.empty()){
//         cout << s.top() << " ";
//         s.pop();
//     }

// return 0;
// }