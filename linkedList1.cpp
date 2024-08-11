#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
   
    // constructor
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

    void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next; // temp ko aage bada dia hee 
        }
    }

int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
       temp=temp->next;
       len++;
    }
    return len;
}

// I want to insert a node right at the head of the linked list;

void insertAtHead(Node* &head,Node* &tail,int data){
    // check for empty linked list
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        
    }else{
        // step1
        Node* newNode=new Node(data);
        //step2
        newNode->next=head;
        //step3
        head=newNode;
    }
}

void insertatTail(Node* &head, Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }else{
        // step 1: create a tail
        Node* newNode=new Node(data);
        //step2
        tail->next=newNode;
        // step3
        tail=newNode;
    }
}

void insertAtPosition(int data,int position, Node* &head, Node* &tail){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //step1 find the position of prev and curr pointer
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=findLength(head);
    if(position>=len){
        insertatTail(head,tail,data);
        return;
    }
    //step1 find prev and curr
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    // step2;
    Node*newNode=new Node(data);
    //step3
    newNode->next=curr;
    //step4
    prev->next=newNode;

}

void deleteNode(int position, Node* &head, Node* &tail) {
        if(head == NULL) {
                cout << "Cannot delete, LL is empty";
                return;
        }

        //deleting first node
        if(position == 1) {
                Node* temp = head;
                head = head -> next;
                temp -> next = NULL;
                delete temp;
                return;
        }
        int len  = findLength(head);


        //deleting last node
        if(position == len) {
                //find prev
                int i = 1;
                Node* prev = head;
                while(i < position - 1) {
                        prev = prev->next;
                        i++;
                }
                //step2:
                prev->next = NULL;
                //step3:
                Node* temp = tail;
                //step4:
                tail = prev;
                //step5:
                delete temp;
                return;
        }

        //deleting middle node

        //step  : find prev and curr
        int i =1;
        Node* prev = head;
        while( i < position-1) {
                prev= prev -> next;
                i++;
        }
        Node* curr = prev -> next;

        //step2:
        prev -> next = curr -> next;
        //step3:
        curr -> next = NULL;
        //step4:
        delete curr;

}


int main(){
    // how to create node
    //Node* newNode=new Node();
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertatTail(head,tail,105); // for this no need tp call print function if we have already call function for head

    print(head);
    cout<<endl;
    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;


    // insertAtPosition(101,3,head,tail);
    // cout<<"Printing after insert at position call"<<endl;
    // print(head);
    // cout<<endl;
    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;

    deleteNode(3,head,tail);
    cout<<endl;
    print(head);
    cout<<endl;

    return 0;



    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(40);
    // Node* fifth=new Node(50);

    // first->next= second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // cout<<"printing the linked list:"<<endl;

    // print(first);

}