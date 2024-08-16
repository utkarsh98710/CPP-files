#include<iostream>
using namespace std;

class Node{
        public:
        int data;
        Node* next;

        Node(int data) {
                this->data = data;
                this->next = NULL;
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
void fun(Node*&head, int positionfromTail,int &ans){
    if(head==NULL){
        return;
    }
    if(positionfromTail==0){
        ans=head->data;
    }
    positionfromTail--;
}
    int getNode(Node*list){
        int ans=-1;
        int positionfromTail=3;
        fun(list,positionfromTail,ans);
        return ans;
    }
int main(){
    Node* head=new Node(1);
    Node* second=new Node(3);
    Node* third=new Node(2);

    head->next=second;
    second->next=third;

    print(head);
}