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

//function to check loop is present or not
bool checkForLoop(Node* &head){
    if(head == NULL){
        cout << "LL is empty" << endl;
    }
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
        if(fast == slow){
            return true;
        }
    }
    return false;
}

//function to remove loop from LL
Node* removeLoop(Node* &head){
    if(head == NULL){
        cout << "LL is empty" << endl;
    }
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
        if(fast == slow){
            slow = head;
            break;
        }
    }
    Node* prev = fast;
    while(slow != fast) {
        prev = fast; 
        slow = slow -> next;
        fast = fast -> next;
    }
    prev -> next = NULL;
    return slow;
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50); 
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eigth = new Node(80);
    Node* ninth = new Node(90);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eigth;
    eigth->next = ninth;
    ninth->next = fifth;


    cout << "Loop present or not: " << checkForLoop(first) << endl;

    removeLoop(first);
    cout << "Loop present or not: " << checkForLoop(first) << endl;
    print(first);


return 0;
}