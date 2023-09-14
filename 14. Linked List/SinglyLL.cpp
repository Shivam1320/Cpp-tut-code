// #include <iostream>
// #include <vector>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;  //node created

//     Node() {  //Constructor created
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
//  };

// void print(Node* &head) {
//     Node* temp = head;
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = NULL;

//     cout << "Printing the LL" << endl;
//     print(first);


// return 0;
// }



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
    Node(int data) { // Constructor
        this->data = data;
        this->next = NULL;
    }

    ~Node() { //Destructor
        cout << "Node with value: " << this->data << " deleted" <<endl;
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

/*------Creation of Linked List ---> using insert a node at the head of a LinkedList------*/
void insertAtHead(Node* &head,Node * &tail, int data) {

    //Special Case --> Check for the Empty Linked List
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    //step 1
    Node* newNode = new Node(data);
    //step 2
    newNode -> next = head;
    //step 3
    head = newNode;
}
/*------Creation of Linked List ---> using insert a node at the tail of a LinkedList-----*/
void insertAtTail(Node* &head, Node* &tail, int data) {

    //Special Case --> Check for the Empty Linked List
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    //step 1 : Create a Node
    Node* newNode = new Node(data);
    //step 2: connect with tail
    tail -> next = newNode;
    //step 3: update tail
    tail = newNode;
}

/*-------------Creation of Linked List ---> Insert at any position--------*/
void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
    //Special Case --> Check for the Empty Linked List
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    //Special Case --> if add node at the starting pos of LL
    if(position == 0) {
        insertAtHead(head, tail, data);
        return;
    }
    //Special Case --> if add node at the ending pos of LL
    int len = findLength(head);
    if(position >= len) {
        insertAtTail(head, tail, data);
        return;
    }
    //step 1 : find previous and current position
    int i = 1;
    Node* prev = head;
    while(i < position) {
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;
    //step 2: 
    Node* newNode = new Node(data);
    //step 3: 
    newNode -> next = curr;
    //step 4:
    prev -> next = newNode;
}


/*-------------Deletion from Linked List--------*/
void deleteNode(int position, Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "Cannot delete, LL is empty";
        return;
    }
    //deleting first Node / head
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }
    int len = findLength(head);

    //deleting last Node / tail
    if(position == len) {
        int i = 1;
        Node* prev = head;
        while(i < position - 1) {
            prev = prev -> next;
            i++;
        }
        prev -> next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    //deleting middle Node
    int i = 1;
    Node* prev = head;
    while(i < position-1) {
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}

int main(){
    // Node* head = new Node(10);
   // Node* head = NULL;

   Node* head = NULL;
   Node* tail = NULL;

    //inserting element at head
    insertAtHead(head,tail, 20);
    insertAtHead(head,tail, 30);
    // insertAtHead(head,tail, 40);
    // insertAtHead(head,tail, 50);
    
    //inserting element at tail
    insertAtTail(head, tail, 77);
    insertAtTail(head, tail, 87);
    // insertAtTail(head, tail, 97);
    
    cout << "Linked List before: " <<endl;
    print(head);

    cout<<endl;

    cout << "Linked List after: " <<endl;
    insertAtPosition(101, 3, head, tail);
    print(head);

    // print(head);
    // cout << endl;

    // deleteNode(2, head, tail);
    // cout<<endl;
    // print(head);
    // cout<<endl;

return 0;
}