#include <iostream>
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

Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = curr -> next;
        while(curr != NULL) {
                next = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = next;
        }
        return prev;
}

bool checkPalindrome(Node* &head) {
        if(head == NULL) {
                cout << "LL is empty" << endl;
                return true;
        }
        if(head -> next == NULL) {
                //only 1 node
                return true;
        }

        // >1 node in LL

        //StepA: find the middle node;
        Node* slow = head;
        Node* fast = head -> next;

        while(fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;
                }
        }
        //slow pointer is pointing to the middle node

        //Step B: reverse LL after middle/slow node
        Node* reverseLLKaHead = reverse(slow -> next);
        //join the reversed LL into the left part
        slow -> next = reverseLLKaHead;

        //Step C: start comparison
        Node* temp1 = head;
        Node* temp2 = reverseLLKaHead;
        while(temp2 != NULL) {
                if(temp1 -> data != temp2 -> data) {
                        // not a palindome
                        return false;
                }
                else {
                        //if data is equal, then aage badh jao
                        temp1 = temp1 -> next;
                        temp2 = temp2 -> next;
                }
        }
        return true;
}

void removeDuplicates(Node* &head){
        if(head==NULL){
                cout<<"ll is empty"<<endl;
                return;
        }
        if(head->next==NULL){
                cout<<"single node in linked list"<<endl;
                return;
        }
        Node* curr=head;
        while(curr!=NULL){
                if( (curr->next!=NULL) &&(curr->data==curr->next->data)){
                        // equal aa gaya;
                        Node* temp=curr->next;
                        curr->next=curr->next->next;
                        temp->next=NULL;
                        delete(temp);
                }else{
                        curr=curr->next;
                }
        }
}

  void print(Node*& head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
void sort0s1s2s(Node* &head){
        if(head==NULL){
             cout<<"ll is empty"<<endl;
                return;
        }
        if(head->next==NULL){
                cout<<"one node present in ll"<<endl;
        }
        //step1: find cunt of zeros, ones, twos
        int countZeros=0;
        int countOnes=0;
        int countTwos=0;
        Node* temp=head;
        while(temp!=NULL){
                if(temp->data==0){
                        countZeros++;
                }
                else if(temp->data==1){
                        countOnes++;
                }
                else if(temp->data==2){
                        countTwos++;
                }
                temp=temp->next;
        }
        // step2: fill zeros, ones, twos in the original ll;
        temp=head;
        //fill zeros
        while(countZeros--){
                temp->data=0;
                temp=temp->next;
        }
        // fill ones
        while(countOnes--){
                temp->data=1;
                temp=temp->next;
        }
        while(countTwos--){
                temp->data=2;
                temp=temp->next;
        }
        
}
// pyari approach
 Node* sort012(Node*&head){
    if(head==NULL){
        cout<<"LL is empty "<<endl;
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    // create dummy list
    Node* zerohead=new Node(-101);
    Node* zerotail =zerohead;

    Node* onehead=new Node(-101);
    Node* onetail =onehead;

    Node* twohead=new Node(-101);
    Node* twotail =twohead;


    // traverse the original linked list;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
                //take out zero wali node
                Node* temp=curr;
                curr=curr->next;
                temp->next=NULL;

                //append zero node in zerohead linked list
                zerotail->next=temp;
                zerotail=temp; // zerotail ko aage bada dia;
        }
        else if(curr->data==1){
                // take out 1 wali node
                Node*temp=curr;
                curr=curr->next;
                temp->next=NULL;

                // append the one node in onehead linked list
                onetail->next=temp;
                onetail=temp;
        }
        else if(curr->data==2){
                //take out 2 wali node 
                Node* temp=curr;
                curr=curr->next;
                temp->next=NULL;

                //append this 2 wali node in twothead linked list
                twotail->next=temp;
                twotail=temp;
        }
    }

    //ab yaha tak 0,1,2 teeno linked list ready he.

    // join them
    // remove dummy wali node.

    // modify one wali linked list
    Node* temp= onehead;
    onehead=onehead->next;
    temp->next=NULL;
    delete temp;

    //modify two wali list
    temp=twohead;
    twohead=twohead->next;
    temp->next=NULL;
    delete temp;

    //join list
     if(onehead!=NULL){
        //one wali list non empty
        // zero wali list koone wali list se attach kar do
        zerotail->next=onehead;

        if(twohead!=NULL){
                onetail->next=twohead;
        }
        else{
                //one wali list is empty;
                if(twohead!=NULL){
                        zerotail->next=twohead;
                }
        }

        //remove zerohead dummy node
        temp=zerohead;
        zerohead=zerohead->next;
        temp->next=NULL;
        delete temp;

        //return head of modified linked list;
        return zerohead;
     }

 }

 // Add two numbers represented by linked list;
Node* addTwoNo(Node*&head1, Node* &head2){
        if(head1==NULL){
                return head2;
        }
        if(head2==NULL){
                return head1;
        }
        // reverse both linked list
        head1=reverse(head1);
        head2=reverse(head2);

        // step2 add both linked list

        Node* ansHead=NULL;
        Node* ansTail=NULL;
        int carry=0;

        while(head1 !=NULL && head2!=NULL){
                //calculate sun
                int sum=carry+head1->data+head2->data;
                //find digit to create node for
                int digit=sum%10;
                //calculate carry
                int carry=sum/10;

                //create a new Node for the digit
                Node* newNode=new Node(digit);
                // atacch the newNode into the ans wali linked list
                if(ansHead==NULL){
                        //first node insert kare 
                        ansHead=newNode;
                        ansTail=newNode;

                }
                else{
                        ansTail->next=newNode;
                        ansTail=newNode;
                }
                head1=head1->next;
                head2=head2->next;
        }
                // jab head1 ki length head2 list se jada ho;
                while(head1!=NULL){
                        int sum=carry+head1->data;
                        int digit=sum%10;
                        int carry=sum/10;
                        Node* newNode=new Node(digit);
                        ansTail->next=newNode;
                        ansTail=newNode;
                        head1=head1->next;
                }
                // jab head2 ki length head1 list se jada ho;
                while(head2!=NULL){
                        int sum=carry+head2->data;
                        int digit=sum%10;
                        int carry=sum/10;
                        Node*newNode=new Node(digit);
                        ansTail->next=newNode;
                        ansTail=newNode;
                        head2=head2->next;
                }

                //handle carry ko alag se
                while(carry!=0){
                        int sum=carry;
                        int digit=sum%10;
                        carry=sum/10;
                        Node* newNode = new Node(digit);
                        ansTail->next=newNode;
                        ansTail=newNode;
                }

                 //step3: reverse the ans linked list
                 ansHead = reverse(ansHead);
                 return ansHead;

}
 


int main() {
//   Node* head = new Node(1);
//   Node* second = new Node(2);
//   Node* third = new Node(0);
//   Node* fourth = new Node(0);
//   Node* fifth = new Node(1);
//   Node* sixth = new Node(1);

//   head -> next = second;
//   second -> next = third;
//   third -> next = fourth;
//   fourth -> next = fifth;
//   fifth -> next = sixth;

//   bool isPalindrome = checkPalindrome(head);

//   if(isPalindrome) {
//           cout << "LL is a valid palindrome" << endl;
//   }
//   else {
//           cout << "LL is not a palindrome" << endl;
//   }

//    removeDuplicates(head);
//         print(head);

        // sort0s1s2s(head);
        // print(head);

        // head=sort012(head);
        // print(head);
        

        Node* head1=new Node(2);
        Node* second1=new Node(4);
        head1->next=second1;

        Node* head2=new Node(2);
        Node* second2=new Node(4);
        Node* third2=new Node(3);

        head2->next=second2;
        second2->next=third2;

        Node* ans=addTwoNo(head1,head2);
        print (ans);


        


  return 0;
}