#include<iostream>
using namespace std;
int main(){
    // int arr[10]={12,13,44, 15};
    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;//first location ka address


    // int*p=arr;
    // cout<<p<<endl; 
    // cout<<&p<<endl;

    // cout<<*arr<<endl;//base address pe jo pada he give 12
    // cout<<arr[0]<<endl;// same as *arr 12
    // cout<<*arr+1<<endl;// 12+1=13
    // cout<<*(arr)+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<arr[1]<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*(arr+3)<<endl;
    // cout<<arr[3]<<endl;

    // int i=0;
    // cout<<arr[i]<<endl;//12
    // cout<<i[arr]<<endl;//12
    // cout<<*(arr+i)<<endl;//12
    // cout<<*(i+arr)<<endl;//12

    // arr=arr+2 //give error;
    // int *p=arr;
    // p=p+2;
    

    //Difference between array and pointer

    // int arr[10];
    // cout<<sizeof(arr)<<endl;// size is 10*4=40

    // int* p=arr;
    // cout<<sizeof(p)<<endl; //always 4 or 8

    // cout<<sizeof(*p)<<endl; // p is pointer refer to integeger data so  *p is also a integer datatype


    //character array
    char ch[10]="Utkarsh";
    char*c=ch;
    cout<<ch<<endl;
    cout<<&ch<<endl;//address of first location
    cout<<ch[0]<<endl;

    cout<<&c<<endl;
    cout<<*c<<endl;
    cout<<c<<endl;






    return 0;
}