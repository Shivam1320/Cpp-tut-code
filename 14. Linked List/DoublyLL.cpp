#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node() { // default constructor created
        this -> data = 0;
        this -> prev = NULL;
        this -> next = NULL;
    }
    Node(int data) { //parameterised Constructor
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node() { //Destructor
        cout << "Node with value: " << this->data << " deleted" <<endl;
    }
 };

 void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
 }

 int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    return len;
 }

    /*-----Insert at head-------*/   // TC = O(1)
    void insertAtHead(Node* &head, Node* &tail, int data) {
        // when LL is empty
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
        }
        else{ //when LL is non-empty
            //step 1: create a new node
            Node* newNode = new Node(data);
            //step 2: link next of new node to head
            newNode -> next = head;
            //step 3: link head prev with new Node
            head -> prev = newNode;
            //step 4: update head
            head = newNode;
        }
    }

    /*-----Insert at tail-------*/   // TC = O(1)
    void insertAtTail(Node* &head, Node* &tail, int data) {
        //when LL is empty
        if(tail == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
        }
        else{ // when LL is non-empty
            //step 1: create a new Node
            Node* newNode = new Node(data);
            //step 2: link prev of new node with tail next
            newNode -> prev = tail;
            //step3: link next of tail with new node prev
            tail -> next = newNode;
            //step4: update tail
            tail = newNode;
        }
    }

    /*-----Insert at position-------*/   // TC = 
    void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
        // Special Case 1: if LL is Empty
        if(head == NULL) {
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
        }
        //Special case 2: if add new node to head or starting position of LL
        if(position == 1){
            insertAtHead(head, tail, data);
            return;
        }
        //Special Case 3: if add new node to tail or ending position of LL
        int length = getLength(head);
        if(position > length){
            insertAtTail(head, tail, data);
            return;
        }

        // Actual Scenario to insert new node at middle or anywhere
        //step 1: find prev and curr position
        int i = 1;
        Node* prevNode = head;
        while (i < position - 1){
            prevNode = prevNode -> next;
            i++;
        }
        Node* currNode = prevNode -> next;
        //step 2: create a new node
        Node* newNode = new Node(data);
        //step 3: 
        prevNode -> next = newNode;
        //step 4:
        newNode -> prev = prevNode;
        //step 5:
        newNode -> next = currNode;
        //step 6:
        currNode -> prev = newNode;
    }

     /*-----------------------------Deletion of any Node from Linked List-----------------------------*/
     void deleteNode(Node* &head, Node* &tail, int position) {
            // Special case 1 : if LL is empty
            if(head == NULL){
                cout << "can't delete LL is empty" << endl;
                return;
            }
            // Special Case 2: if input position is greater than length of LL
            int len = getLength(head);
            if(position > len){
                cout << "Please enter a valid position" << endl;
                return;
            }
            //Special Case 3 : if there is only one node
            if(head -> next == NULL){
                Node* temp = head;
                head = NULL;
                tail == NULL;
                delete temp;
                return;
            }
            //Special Case 4 : if deleting first node or head node
            if(position == 1){
                Node* temp = head;
                head = head -> next;
                head -> prev = NULL;
                temp -> next = NULL;
                delete temp;
                return;
            }
            // Special Case 5: deleting last node or tail node
            if(position == len){
                Node* temp = tail;
                tail = tail -> prev;
                temp -> prev = NULL;
                temp -> next = NULL;
                delete temp;
                return;
            }
            // Case 6: Dleting node from middle
              // step 1 : find left, curr, right node
              int i = 1;
              Node* left = head;
              while(i < position - 1){
                left = left -> next;
                i++;
              }
              Node* curr = left -> next;
              Node* right = curr -> next;
              //step 2: 
              left -> next = right;
              right -> prev = left;
              curr -> next = NULL;
              curr -> prev = NULL;
              delete curr;
              return;
     }

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    Node* head = first;
    Node* tail = third;

    first -> next = second; 
    second -> prev = first;

    second -> next = third;
    third -> prev = second;

    third -> next = fourth;
    fourth -> prev = third;

    fourth -> next = fifth;
    fifth -> prev = fourth;

    cout << "before insert any new node" << endl;
    print(first);
    cout<<endl;

    // insertAtHead(head, tail, 101);
    // cout <<"after insert at head "<< endl;
    // print(head);
    // cout << endl;

    // cout << "after insert at tail" << endl;
    // insertAtTail(head, tail,501);
    // print(head);
    //  cout << "aafter insert new node" << endl;
    //  insertAtPosition(head, tail, 101,3);
    //  print(head);

    deleteNode(head, tail, 5);
    print(head);


return 0;
}