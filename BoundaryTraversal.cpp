#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

    Node*build(){
        int data;
        cout<<"Enter the data"<<endl;
        cin>>data;

        if(data==-1){
            return NULL;
        }
        //step A,B,C
        Node*root=new Node(data);
        cout<<"Enter the data for left part of"<<data<<"node"<<endl;
        root->left=build();
        cout<<"Enter the data for right part of"<<data<<"node"<<endl;
        root->right=build();

        return root;
    }

void printLeftBoundary(Node*root){
    //base case
    // if root is null then go back

    if(root==NULL){
        return;
    }
    // if root is a leaf node , then go back
    if(root->left ==NULL && root->right==NULL){
        return;
    }

    cout<<root->data<<" ";
    if(root->left){
        printLeftBoundary(root->left);
    }
    else{
        printLeftBoundary(root->right);
    }
}

void printLeafBoundary(Node*root){
    //base case
	if(root == NULL)
		return;
	if(root->left == NULL && root->right == NULL) {
		cout << root->data << " ";
	}
	printLeafBoundary(root->left);
	printLeafBoundary(root->right);
}

void printRightBoundary(Node*root){
    // base case 
    if(root==NULL){
        return;
    }
    if(root->right ==NULL && root->left==NULL){
        return;
    }
    if(root->right){
     printRightBoundary(root->right);  
    }
    else{
     printRightBoundary(root->left);  
    }
    cout<<root->data<<" ";
   
}
    void boundaryTraversal(Node*root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        printLeftBoundary(root->left);
        printLeafBoundary(root);
        printRightBoundary(root->right);
    }

int main(){
  Node*root=NULL;
  root=build();
  boundaryTraversal(root);
}