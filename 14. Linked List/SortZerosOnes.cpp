// Sort Zeros, Ones and Twos

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

//function to print LL
void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
/*
// function to sort zeros ones and twos  --> Approch 1
void sortZeroOneTwo(Node* &head){
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zeros++;
        }
        if(temp->data == 1){
            ones++;
        }
        if(temp->data == 2){
            twos++;
        }
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        while(zeros--){
            temp->data = 0;
            temp = temp->next;
        }
        while(ones--){
            temp->data = 1;
            temp = temp->next;
        }
        while(twos--){
            temp->data = 2;
            temp = temp->next;
        }
    }
}
*/

//Function to sort zeros, ones, twos --> Approch 2

Node* sort2(Node* &head) {
        if(head == NULL) {
                cout << "LL is empty " << endl;
                return NULL;
        }
        if(head -> next == NULL) {
                //sngle node in LL
                return head;
        }

        //create dummy nodes
        Node* zeroHead = new Node(-101);
        Node* zeroTail = zeroHead; 

        Node* oneHead = new Node(-101);
        Node* oneTail = oneHead; 

        Node* twoHead = new Node(-101);
        Node* twoTail = twoHead; 

        //traverse the original LL
        Node* curr = head;
        while(curr != NULL) {

                if(curr -> data == 0) {
                        //take out the zero wali node
                        Node* temp = curr;
                        curr = curr -> next;
                        temp -> next = NULL;

                        //append the zero node in zeroHead LL
                        zeroTail -> next = temp;
                        zeroTail = temp;

                }
                else if(curr -> data == 1) {
                        //take out the one wali node
                        Node* temp = curr;
                        curr = curr -> next;
                        temp -> next = NULL;

                        //append the zero node in zeroHead LL
                        oneTail -> next = temp;
                        oneTail = temp;

                }
                else if(curr -> data == 2) {
                        //take out the zero wali node
                        Node* temp = curr;
                        curr = curr -> next;
                        temp -> next = NULL;

                        //append the zero node in zeroHead LL
                        twoTail -> next = temp;
                        twoTail = temp;

                }
        }

        //ab yha pr, zero , one, two, teeno LL readyv h 

        // join them 
        //remove dummmy nodes

        //modify one wali list
        Node* temp = oneHead;
        oneHead = oneHead -> next;
        temp -> next = NULL;
        delete temp;

        //modify two wali list
        temp = twoHead;
        twoHead = twoHead -> next;
        temp -> next = NULL;
        delete temp;

        //join list
        if(oneHead != NULL) {
                // one wali list is non empty
                //zero wali list ko one wali list se attach krdia 
                zeroTail -> next = oneHead;
                
                if(twoHead != NULL)
                        oneTail -> next = twoHead;
        }
        else{
                //one wali list is empty
                if(twoHead != NULL)
                        zeroTail -> next = twoHead;
        }

        //remove zerohead dummy Node
        temp = zeroHead;
        zeroHead = zeroHead -> next;
        temp -> next = NULL;
        delete temp;
        
        //return head of the modified linked list
        return zeroHead;

}

int main(){
    Node* head = new Node(0);
    Node* second = new Node(2);
    Node* third = new Node(0);
    Node* fourth = new Node(1);
    Node* fifth = new Node(0); 
    Node* sixth = new Node(2); 
    Node* seventh = new Node(1); 

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = NULL;


    cout << "Linked List after sorting" << endl;
return 0;
}