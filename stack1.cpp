#include<iostream>
#include<stack>
using namespace std;

// Example 1
// class Stack{
//     public:
//     int *arr;
//     int top;
//     int size;
//  Stack(int size){
//      arr=new int[size];
//      this->size=size;
//      top=-1;
//  }
// // functions
// void push(int data){
//     if(size-top>1){
//         //space avilabe
//         //insert
//         top++;
//         arr[top]=data;
//     }
//     else{
//         // space not avail
//         cout<<"stack overflow"<<endl;
//     }
// }
// void pop(){
//     if(top==-1){
//         //stack is empty
//         cout<<"stack underflow. cant delete element"<<endl;
//     }
//     else{
//         //space not avail
//         top--;
//     }
// }

// int getTop(){
//     if(top==-1){
//         cout<<"There is not element in stack"<<endl;
//     }
//     else{
//         return arr[top];
//     }
// }

// int getSize(){
//     return top+1;
// }
// bool isEmpty(){
//     if(top==-1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }  
// };


// Example 2:print middle element:
// void printMiddle(stack<int> &s,int totalSize){
//     if(s.size()==totalSize/2+1){
//         cout<<"Middle element is :"<<s.top()<<endl;
//         return;
//     }
//     int temp=s.top();
//     s.pop();

//     //recursive call
//     printMiddle(s,totalSize);

//     //backtracking
//     s.push(temp);
// }


// Example 3 -> 2 stacks in an array;
class Stack{ 
   public:
   int*arr;
   int size;
   int top1;
   int top2;

   Stack(int size){
       arr=new int[size];
       this->size=size;
       top1=-1;
       top2=size;
   }
//fuctions
void push1(int data){
    if(top2-top1){
        //space not available
        cout<<"Overflow"<<endl;
    }
    else{
        //space available
        top1++;
        arr[top1]=data;
    }
}

void pop1(){
    if(top1==-1){
        //stack is empty
        cout<<"underflow case"<<endl;
    }
    else{
        //stack not empty
        top1--;
    }
}

void pop2(){
    if(top2==size){
        //atack 2 is empty;
        cout<<"overflow in stack 2"<<endl;
    }
    else{
        //stack is not empty
        top2++;
        arr[top2]=0;
    }
}

void push2(int data){
    if(top2-top1==1){
        //space not availble
        cout<<"overflow in stack 2"<<endl;
    }
    else{
        top2--;
        arr[top2]=data;
    }
}

void print() {
        cout << endl;
        cout << "top1: " << top1 << endl;
        cout << "top2: "<< top2 << endl;
        for(int i=0; i<size; i++) {
                cout << arr[i] << " ";
        }cout << endl;
}

};

int main(){
    // creation
    // stack<int> st;

    // // insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // // remove
    // st.pop();

    // //check element on top
    // cout<<"Element on top is: "<<st.top()<<endl;

    // //size
    // cout<<"size of stack is: "<<st.size()<<endl;

    // if(!st.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }

// Example4-> using string .. traverse string using stack
     // string str = "babbar";

     //  stack<char> s;
     //  for(int i=0; i<str.length(); i++) {
     //          s.push(str[i]);
     //  }

     //  while(!s.empty()) {
     //          cout << s.top() << " ";
     //          s.pop();
     //  }
     //  cout << endl;

/// Example 4 ->Make our own stack from scratch
    //   Stack s(10);
    // // insertion
    //  s.push(10);
    //   s.push(20);
    //   s.push(30);
    //   s.push(40);
    //   s.push(50);
    //   //s.push(60);

    //   while(!s.isEmpty()) {
    //           cout << s.getTop() << " ";
    //           s.pop();
    //   }cout << endl;

    //   cout << "Size of stack " << s.getSize() << endl;

    //   s.pop();

    //   return 0;



    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    // int totalSize=s.size();
    // printMiddle(s,totalSize);



            Stack s(10);

            s.push1(10);
            s.print();
            s.push1(20);
            s.print();
            s.push1(30);
            s.print();
            s.push1(40);
            s.print();
            s.push1(50);
            s.print();

            s.push2(100);
            s.print();
            s.push2(110);
            s.print();
            s.push2(120);
            s.print();
             s.push2(130);
            s.print();
            s.push2(140);
            s.print();

           

        
    return 0;
    
}