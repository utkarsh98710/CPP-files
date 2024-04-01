#include<iostream>
using namespace std;

//factorial of a number
// int factorial(int n){
//     //base case
//     if(n==1)
//     return 1;

//     int ans1 = n* factorial(n-1);
//     return ans1;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     int ans = factorial(n);
//     cout<<"Answer is: "<<ans<<endl;
//     return 0;
// }

// print counting.
// void printCounting(int n){
//     //base condition
//     if(n==0){
//         return;
//     }
//     // processing
//     cout<<n<<" ";
    
//     //recursive relation
//     printCounting(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     printCounting(n);
//     cout<<endl;
// }

//fibonacci series

int fib(int n){
    //base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans1=fib(n-1)+fib(n-2);
    return ans1;

}
int main(){
    int n;
    cout<<"Enter the term you want to see "<<endl;
    cin>>n;

    int ans=fib(n);
    cout<<n<<"th term is: "<<ans<<endl;
}

