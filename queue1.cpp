#include <iostream>
#include<queue>
using namespace std;


// class Queue {
//         public:
//         int *arr;
//         int size;
//         int front;
//         int rear;

        // Queue(int size) {
        //         this->size = size;
        //         arr = new int[size];
        //         front = 0;
        //         rear = 0;
        // }

        // void push(int data) {
        //         if(rear == size) {
        //                 cout << "Q is full " << endl;
        //         }
        //         else {
        //                 arr[rear] = data;
        //                 rear++;
        //         }
        // }

        // void pop() {
        //         if(front == rear) {
        //                 cout << "Q is empty" << endl;
        //         }
        //         else{
        //                 arr[front] = -1;
        //                 front++;
        //                 if(front == rear) {
        //                         front = 0;
        //                         rear = 0;
        //                 }
        //         }
        // }

        // int getFront() {
        //         if(front == rear) {
        //                 cout << "Q is empty"<< endl;
        //                 return -1;
        //         }
        //         else {
        //                 return arr[front];
        //         }
        // }

        // bool isEmpty() {
        //         if(front == rear) {
        //                 return true;
        //         }
        //         else {
        //                 return false;
        //         }
        // }
        // int getSize() {
        //         return rear - front;
        // }
// };

// program 3 circular queue operations
// class cirQueue{
//         public:
//         int size;
//         int *arr;
//         int front;
//         int rear;

//         cirQueue(int size){
//                 this->size=size;
//                 arr=new int[size];
//                 front=-1;
//                 rear=-1;
//         }
//         void push(int data){
//                 //queue is full
//                 // single element case
//                 // cicular nature
//                 // normal flow

//                 // add one more condition in the queue is full

//                 if(front==0 && rear==size-1 && rear==front-1){
//                         cout<<"Queue is full, cant insert"<<endl;
//                 }
//                 else if(front=-1){
//                         front=rear=0;
//                         arr[rear]=data;
//                 }
//                 else if(rear=size-1 && front!=0){
//                         rear=0;
//                         arr[rear]=data;
//                 }
//         }

//         void pop(){
//                 //empty check
//                 //single element
//                 // cicular queue
//                 // normal flow

//                 if(front=-1){
//                         cout<<"Q is empty, cannot pop"<<endl;
//                 }
//                 else if(front==rear){
//                         arr[front]=-1;
//                         front=-1;
//                         rear=-1;
//                 }
//                 else if (front==size-1){
//                         front=0;
//                 }
//                 else{
//                         front++;
//                 }
//         }
 
// };

int main() {


// part 1

//   Queue q(10);

//   q.push(5);
//   q.push(15);
//   q.push(25);
//   q.push(55);

//   cout << "Size of queue is: " << q.getSize() << endl;


//   q.pop();

//    cout << "Size of queue is: " << q.getSize() << endl;

//    cout << "Front element is: " << q.getFront() << endl;

//    if(q.isEmpty()) {
//            cout << "Q is empty" << endl;
//    }
//    else{
//            cout << "Q is not empty" << endl;
//    }


    // part 2
   //creation
//    queue<int>q;
//     //insertion
//     q.push(5);
//     q.push(15);
//     q.push(25);
//     q.push(55);

//     cout<<"Sizd of queue is:"<<q.size()<<endl;

//     // removal
//     q.pop();

//     cout<<"size of queue is "<< q.size()<<endl;

//     if(q.empty()){
//         cout<<"Queue is empty "<<endl;
//     }
//     else{
//         cout<<"queue is not empty"<<endl;
//     }

// program 4 dequqe
   // creation
//    deque<int> dq;

//    dq.push_back(5);
//    dq.push_back(10);
//    dq.push_back(20);
//    dq.push_back(30);

//    cout<<"size: "<<dq.size()<<endl;
//    dq.pop_front();
//    cout<<"size: "<<dq.size()<<endl;
//    dq.pop_front();

//    cout<<"size: "<<dq.size()<<endl;

//    cout<<"front: "<<dq.front()<<endl;
//    cout<<"back: "<<dq.back()<<endl;

//    if(dq.empty()){
//         cout<<"Dq is empty"<<endl;
//    }
//    else{
//         cout<<"Dq is not empty"<<endl;
//    }


  return 0;
}