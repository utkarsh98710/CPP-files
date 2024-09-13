#include<iostream>
#include<queue>
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

Node*buildTree(){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    // step A,B and C

    Node*root=new Node(data);

    cout<<"Enter the data from left side of the: "<<data<<endl;
    root->left=buildTree();
    
    cout<<"Enter the data from right side of the: "<<data<<endl;
    root->right=buildTree();

    return root;
}

Node*levelOrderTraversal(Node*root){
    queue<Node*>q;
    // intially
    q.push(root);
    // we wangt to print level wise 
    q.push(NULL);

    while(!q.empty()){
        //A
        Node*temp=q.front();
        //B
        q.pop();

        if(temp==NULL){
             cout<<endl;
             if(!q.empty()){
                q.push(NULL);
             }
        }
        else{
            cout<<temp->data<<" ";
            //D
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

bool kthAncestor(Node*root, int&k,int p){
    //base case
    if(root==NULL){
        return false;
    }

    if(root->data==p){
        return true;
    }

    bool leftAns=kthAncestor(root->left,k,p);
    bool rightAns=kthAncestor(root->right,k,p);

    // wapas aare honge
    // check left ya right me ans mila ya nahi

    if(leftAns|| rightAns){
        k--;
    }
    if(k==0){
        cout<<" Answer: "<<root->data<<endl;
        k=-1;
    }

    return leftAns|| rightAns;
}

 //     1
	// /  \
	// 2	3 
 //   / \
 //  4	  5
	// K = 1
	// P= 4

int main(){
    Node* root=NULL;
    root=buildTree();

    levelOrderTraversal(root);

    int k=1;
    int p=4;
    bool found=kthAncestor(root,k,p);
    cout<<found<<endl;
    

}