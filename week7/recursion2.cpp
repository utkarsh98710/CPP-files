#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// Q.1)climbing stairs
// int climbStairs(int n){
//     // base case ->stopping condition
//     if(n==0 || n==1){
//         return 1;
//     }
//     int ans=climbStairs(n-1)+climbStairs(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     int ans=climbStairs(n);
//     cout<<"Answer is : "<<ans<<endl;
//     return 0;
// }

// printing array elements
//by looping
// int main(){
//     int arr[10]={10,20,30,40,50};
//     int n=arr.size();

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
// }

// by recursion
// void print(int arr[], int n, int i){
//     //base case
//     if(i>=n){
//         return;
//     }
//     //1 case solve
//     cout<<arr[i]<<" ";
//     // remaining case i le aage ka case print.
//     print(arr,n,i+1);
// }
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int n=5;
//     int i=0;
//     print(arr,n,i);
// } 

// find max number in an array
// void findMax(int arr[],int n ,int i, int& maxi){
//     //base case
//     // all index is over it means poora over ho gaya ->get back
//     if(i>=n){
//         return;
//     }
//     //we solve one case . check current element for max
//     if(arr[i]>maxi){
//         maxi=arr[i];
//     }
//     //remaining work
//     findMax(arr,n,i+1,maxi);
// }
// int main(){
//     int arr[]={10,30,21,44,32,17,19,66};
//     int n=8;
//     int i=0;
     
//     int maxi=INT_MIN;
//     findMax(arr,n,i,maxi);
//     cout<<"Maximum ans is "<<maxi<<endl;
// }

//find small char in given string and return their index
// void checkKey(string& str,int i, int n, char& key, vector<int>&ans){
//     if(i>=n){
//         //key not found
//         // return -1;
//         return;
//     }
//     // 1 case kara he
//     if(str[i]==key){
//         // cout<<"Found at: "<<i<<endl;  // this is for printing every lacationn of b in given string
//         // return i;
//         //store in vector
//         ans.push_back(i);
//     }
//     // remaining work
//     return checkKey(str,i+1,n,key,ans);
// }
// int main(){
//     string str="lovebabbar";
//     int n=str.length();

//     char key='a';

//     int i=0;
//     vector<int> ans;
//     // int ans=checkKey(str,i,n,key);
//     checkKey(str,i,n,key,ans);
//     // cout<<"answer is: "<<ans<<endl;
//     //for store ans and printing
//     cout<<"Printing ans "<<endl;
//     for(auto val:ans){
//         cout<<val<<" "<<endl;
//     }
//     return 0;
// }

// a number is given we have to print digit of given number
void printDigts(int n){
    if(n==0){
        return ;
    }
    int newValueOfN = n/10;
    printDigts(newValueOfN);

    // 1 case by me
    int digits = n%10;
    cout<<digits <<" ";
}
int main(){
    int n=647;
    printDigts(n);
}