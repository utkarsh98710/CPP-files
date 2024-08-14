#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

    void print(Node*& head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    int getLength(Node* head){ // TC-> o(N);
        int len=0;  // two variable o(1);
        Node*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }

// Middle of the linked list
Node* middleOftheLL(Node* &head){
    if(head==NULL){
        cout<<"Linked list is empty"<<endl;
        return head;
    }
    if(head->next==NULL){ // only one element in ll
        return head;
    }
    // more than 1 node in ll
    Node* slow=head;
    Node* fast=head; // we start from head->next it will give us one aage wali value.

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
    

// Reverse k nodes in linked list
Node* reverseKnodes(Node* &head,int k){
    if(head==NULL){
        cout<<"linked list is empty"<<endl;
        return NULL;
    }
    int len=getLength(head);
    if(k>len){
       return head;
    }

    // it means number of nodes in linked list is >=k;
    //step1 reverse first k nodes of ll;
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    //step2 recursive call for remaining nodes
    if(forward!=NULL){
        head->next=reverseKnodes(forward,k);
    }
    //step3 return head of the modified linked list;
    return prev;
}

//check for loop in linked list
bool checkForLoop(Node* &head) {
        if(head == NULL) {
                cout << "LL is empty "<< endl;
                return false;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;
                }

                if(slow == fast ) {
                        //loop present
                        return true;
                }
        }
        //fast NULL hogya
        return false;

}


// starting point of the loop;
Node* startingPointLoop(Node* &head) {
        if(head == NULL) {
                cout << "LL is empty "<< endl;
                return NULL;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;
                }

                if(slow == fast ) {
                        //loop present
                        slow=head;
                        break;
                }
            }
            while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
            }
           //fast NULL hogya
           return slow;

}

// want  to remove loop;
Node* removeLoop(Node* &head) {
        if(head == NULL) {
                cout << "LL is empty "<< endl;
                return NULL;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;
                }
                   
                if(slow == fast ) {
                        //loop present
                        slow=head;
                        break;
                }
            }
            Node* prev=fast;
            while(slow!=fast){
                    prev=fast;
                    slow=slow->next;
                    fast=fast->next;
            }
           //fast NULL hogya
           prev->next=NULL;
           return slow;

}




int main(){
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);
  Node* seventh = new Node(70);
  Node* eighth = new Node(80);
  Node* ninth = new Node(90);

  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = seventh;
  seventh -> next = eighth;
  eighth -> next = ninth;
  ninth -> next = fourth;

//print(head);
//   head = reverseKNodes(head, 5);
//   print(head);

  //cout << "Middle Node is: " << getMiddle(head) -> data << endl;


// cout << "Loop is Present or not " << checkForLoop(head) << endl;

cout << "Starting Point of LOOP is: " << startingPointLoop(head) -> data << endl;
removeLoop(head);
print(head);

cout << "Loop is Present or not " << checkForLoop(head) << endl;






return 0;



}