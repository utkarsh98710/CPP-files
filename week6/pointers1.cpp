#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // int b=5;
    // cout<<a<<endl;
    
    // //Addres of a and b
    // cout<<&a<<endl;
    // cout<<&b<<endl;


    // int a=5;
    //pointer create
    // int*ptr = &a; //ptr is a pointer to A which contain a (ptr a ke address ko point kar raha he)

    //access the value ptr is pointing to 
    // de-reference of ptr..
    // cout<< "Address of a is:"<< &a<<endl; 
    // cout<<"value stores at ptr is: "<<ptr<<endl;
    // cout<< "value ptr is pointing to is: "<<*ptr<<endl;
    // cout<<"address of ptr"<<&ptr<<endl; 

// int b=10;
// int* ptr1=&a;
// cout<<sizeof(ptr1)<<endl;

// char ch='c';
// char* c= &ch;
// cout<<sizeof(c)<<endl;

// double dtr = 2.03;
// double* de = &dtr;
// cout<<sizeof(de)<<endl;

///***********************************************

//bad practice not declare pointer this way / segmentation falult
// int* ptr3;
// cout<<*ptr3 <<endl;

// do repair this problem create null pointer.
//intialise pointer with 0 if we not known the value of starting..

// int* ptr4=0; // or intialise with nullptr;
// cout<< *ptr4 <<endl;

 //copy counter
//  int h=5;
//  int* ptr5=&a;
//  int* dusraPtr = ptr;
//  cout<<*ptr5<<endl;
//  cout<<*dusraPtr<<endl;

int a=10;
int *p =&a;
int *q =p;
int *r= q;

cout<<a<<endl;
cout<<&a<<endl;
cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl;
cout<<q<<endl;
cout<<&q<<endl;
cout<<*q<<endl;
cout<<r<<endl;
cout<<&r<<endl;
cout<<*r<<endl;
cout<<(*p +*q +*r)<<endl;
cout<<(*p)*2 + (*r)*3<<endl;
cout<<(*p/2) - (*q)/2<<endl;




}