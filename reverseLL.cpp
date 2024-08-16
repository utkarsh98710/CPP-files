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

// Reverse a linked list using recursion
    Node* reverse(Node* &prev,Node* &curr){
        //base case
        if(curr==NULL){
            //ll reverse ho chuki he
            return prev;
        }

        // 1 case solve baki recursion call
        Node* forward=curr->next;
        curr->next=prev;
        reverse(curr,forward);
    }

// Reverse a linked list using looping:
Node* reverseUsingloop(Node* &head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev; //new head reverse
}

// another way of using recursion
 Node* reverseusingRecursion(Node* &prev,Node* &curr){
        //base case
        if(curr==NULL){
            //ll reverse ho chuki he
            return prev;
        }

        // 1 case solve baki recursion call
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;

        // recursion call
        return reverse(prev,curr);
    }

int main(){
   
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    // Do this in doubly ll
    Node*head=first;
    Node* tail=fourth;
 
    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    third->next=fourth;
    fourth->prev=third;

     print(first);
    cout<<endl;;
//reverse a linked list using recursion
    // Node*prev=NULL;
    // Node*curr=head;
    // head=reverse(prev,curr);
    // cout<<endl;
    // print(head);
    // cout<<endl;

// reverse a linked list using for loop;
    // Node*prev=NULL;
    // Node*curr=head;
    // head=reverseUsingloop(head);
    // cout<<endl;
    // print(head);
    // cout<<endl;

// reverse a linked list using recursion (new)
   
    Node*prev=NULL;
    Node*curr=head;
    cout<<"Printing reverse list"<<endl;
    head=reverseusingRecursion(prev,curr);
    cout<<endl;
    print(head);
    cout<<endl;





    return 0;
}


#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int>&s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }
    int topElement=s.top();
    s.pop();
    //recursion call
    insertAtbottom(s,target);
    //backtracking
    s.push(topElement);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    if(s.empty()){
        cout<<"stack is empty, cant insertAtbottom"<<endl;
        return 0;
    }
    int target=s.top();
    s.pop();
    insertAtbottom(s,target);
    cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}



