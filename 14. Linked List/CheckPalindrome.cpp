// Remove the Loop from LL

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

// function for reverse LL
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


bool checkPalindrome(Node* &head){
    if(head == NULL && head -> next == NULL){
        return true;
    }

    // step 1: find middle node
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
    }
    // Now slow pointer is pointing in middle node
    // step 2: reverse LL after middle node
    Node* reverseLLKaHead = reverseList(slow -> next);
    slow -> next = reverseLLKaHead;

    //step 3: start comparison
    Node* temp1 = head;
    Node* temp2 = reverseLLKaHead;

    while(temp2 != NULL){
        if(temp1 -> data != temp2 -> data){
            //not a palindrome
            return false;
        }
        else{
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }
    return true;
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10); 

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    print(first);
    cout << endl;

    bool isPalindrome = checkPalindrome(first);

    if(isPalindrome){
        cout << "LL is palindrome" << endl;
    }
    else{
        cout << "LL is not palindrome" << endl;
    }


return 0;
}