#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // int b=5;
    // cout<<a<<endl;
    
    // //Addres of a and b
    // cout<<&a<<endl;
    // cout<<&b<<endl;


    int a=5;
    //pointer create
    int*ptr = &a; //ptr is a pointer to A which contain a (ptr a ke address ko point kar raha he)

    //access the value ptr is pointing to 
    // de-reference of ptr..
    cout<< "Address of a is:"<< &a<<endl; 
    cout<<"value stores at ptr is: "<<ptr<<endl;
    cout<< "value ptr is pointing to is: "<<*ptr<<endl;
    cout<<"address of ptr"<<&ptr<<endl;



 

}