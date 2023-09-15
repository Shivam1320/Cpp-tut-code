// Implementing Self Stack Class -> nOt using the STL

#include <iostream>
#include <vector>
using namespace std;

class Stack {
    public:
        int *arr;
        int top;
        int size;

        Stack(int size) {  // Constructor for Stack
            arr = new int[size];
            this->size = size;
            top = -1;
        }

        //functions to be perform in Stack
        void push(int data) {
            if(size - top > 1) {
                top++;
                arr[top] = data;
            }
            else{
                //space not available
                cout << "Stack Overflow" << endl;
            }
        }

        void pop() {
            if(top == -1) {
                //stack is empty
                cout << "Stack is Underflow, can't delete element" << endl;
            }
            else{
                top--;
            }
        }

        int getTop() {
            if(top == -1) {
                cout << "There is no element in stack " << endl;
            }
            else{
                return arr[top];
            }
        }

        int getSize(){ // return no. of valid elements in stack
            return top+1;
        }

        bool isEmpty() {
            if(top == -1) {
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    //creation
    Stack st(5);

    // //insertion
    st.push(10);
    st.push(20); 
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    //deletion
    st.pop();

    //peek
    cout << "Element on top is: " << st.getTop() << endl;

    //No. of elements
    cout << "No. of Elements in stack is : " << st.getSize() << endl;

    //check empty
    cout << "check stack is empty or not: " << st.isEmpty() << endl;

    //printing stack --> in this case stack becomes empty -> becuse we can only access the top item in stack

    cout << "printing items in stack "<< endl;
    while(!st.isEmpty()){
            cout << st.getTop() << " ";
            st.pop();
    }


return 0;
}