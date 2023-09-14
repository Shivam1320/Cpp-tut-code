
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

//function to find the length of Linked List
int findLength(Node* &head) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp -> next;
        len++;
    }
    return len;
}

Node* reverseKNodes(Node* head, int k){
    if(head == NULL){ // when ll is empty
        cout << "LL is empty" << endl;
        return NULL;
    }
    if(head -> next == NULL){ // when only one node in LL
        return head;
    }

    int length = findLength(head);
    if(k > length) {
        return head;
    }

    // Actual Code
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr -> next;
    int count = 0;

    while(count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    //recursive call
    if(forward != NULL){
        head -> next = reverseKNodes(forward, k);
    }

    return prev;
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    print(first);
    cout << endl;

    first = reverseKNodes(first, 8);
    print(first);


return 0;
}