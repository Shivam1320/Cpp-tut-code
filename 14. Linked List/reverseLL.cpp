#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;  //node created

    Node() {  //Constructor created
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
 };

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//function for reverse Linked List
Node* reverse(Node* &prev, Node* &curr){
    //base case
    if(curr == NULL){
        return prev;
    }
    //solve one case
    Node* forward = curr -> next;
    curr -> next = prev;

    //recursive call
    reverse(curr, forward);
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    cout << "Printing the LL" << endl;
    print(first);
    cout << endl << endl;
    
    cout << "After reverse";
    Node* prev = NULL;
    Node* curr = first;
    first = reverse(prev, curr);
    cout << endl;
    print(first);


return 0;
}