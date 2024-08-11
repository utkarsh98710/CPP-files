#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        cout<<"Node with value: "<<this->data<<"deleted"<<endl;
    }
};

    void print(Node* &head){ // TC-> har node pe ek baar ja rahe he to o(N);
        Node*temp=head;    // SC-> isme bss ek variable banaya he to o(1);
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
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

    void insertAthead(Node* &head,Node* &tail,int data){// TC-> o(1)
        if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;
        }else{
            //step1 create a node;
            Node* newNode=new Node(data);
            //step2
            newNode->next=head;
            //step3
            head->prev=newNode;
            //step4
            head=newNode;
        }
    }

    void insertAtTail(Node* &head,Node* &tail,int data){
          if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;
        }else{
             //step1 create a node;
            Node* newNode=new Node(data);
            //step2
            tail->next=newNode;
            //step3
            newNode->prev=tail;
            //step4
            tail=newNode;
        }
        
    }

    void insertAtPosition(int data, int position,Node* &head,Node* &tail){
        if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;
            return;
        }
        //step1
        if(position==1){
            insertAthead(head,tail,data);
            return;
        }
        int len=getLength(head);

        if(position>len){
            insertAtTail(head,tail,data);
            return;
        }
        // position<len -> middle me insert karna ho kahi
        // step1: find the position of prev and curr;
        int i=1;
        Node* prevNode=head;
        while(i<position-1){
             prevNode=prevNode->next;
             i++;
        }
        Node* curr=prevNode->next;
        //step2 :create a node
        Node* newNode=new Node(data);
        //step3
        prevNode->next=newNode;
        //step3
        newNode->prev=prevNode;
        //step4
        newNode->next=curr;
        //step5
        curr->prev=newNode;

    }
void deleteFromPosition(Node* &head, Node* &tail, int position) {
        if(head == NULL) {
                cout << "Linked list is empty";
                return;
        }
        if(head -> next == NULL) {
                //single node
                Node* temp = head;
                head = NULL;
                tail = NULL;
                delete temp;
                return;
        }
        int len = getLength(head);
        if(position > len) {
                cout << "please enter a valid position " << endl;
                return;
        }

        if(position == 1) {
                //want to delete the first node
                Node* temp = head;
                head = head ->next;
                head -> prev = NULL;
                temp ->next = NULL;
                delete temp;
                return;
        }
        
        if(position == len) {
                //delete last node
                Node* temp = tail;
                tail = tail -> prev;
                temp ->prev = NULL;
                tail ->next = NULL;
                delete temp;
                return;
        }

        //delete from middle of linked list

        //step1: find left, curr, right
        int i = 1;
        Node* left = head;
        while( i < position - 1) {
                left = left -> next;
                i++;
        }
        Node* curr = left -> next;
        Node* right = curr -> next;

        //step2:
        left -> next = right;
        //step3:
        right -> prev = left;
        //step4:
        curr -> next = NULL;
        curr ->prev = NULL;
        delete curr;


}


int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);

    // Do this in doubly ll
    Node*head=first;
    Node* tail=third;
 

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    // print(first);
    // cout<<endl;;

    insertAthead(head,tail,101);
    // cout<<endl;
    // print(head);

    insertAtTail(head,tail,126);
    // cout<<endl;
    // print(head);
    // cout<<endl;

    insertAtPosition(425,3,head,tail);
    print(head);
    cout<<endl;
   
   deleteFromPosition(head,tail,1);
   cout<<endl;
   print(head); 
   cout<<endl;

   return 0;


}