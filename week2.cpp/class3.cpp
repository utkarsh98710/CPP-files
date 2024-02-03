#include <iostream>
using namespace std;

//    void printname(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"Babbar" <<endl;
//     }
//    }
//  int main (){
//      //function call
//      printname();
//  }


// Find max of three number

// int findmax(int num1, int num2, int num3){
//      if(num1 > num2 && num1>num3){
//         return num1;
//      }
//      else if(num2> num1 && num2>num3){
//         return num2;
//      }
//      else{
//         return num3;
//      }
// }
// int main(){
// int a,b,c;
// cin>> a>>b>>c;
// int maximumnumber =findmax(a,b,c);
// cout<< maximumnumber <<endl;
// return 0;
// }


// Counting from 1 to n
// here n is parameter
// void printCounting(int n){ 
//     for(int i=1; i<=n; i++){
//         cout<< i<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//    int n;
//    cout<<"Enter the value of n"<<endl;
//    cin>>n;

// here n is argument

//    printCounting(n);
//    return 0;

// }

// Write a function of student and grade problem 

// char getGrade(int marks){
    // if(marks >= 90)
    // return 'A';
    // else if(marks>=80)
    // return 'B';
    // else if(marks>=70)
    // return 'C';
    // else if(marks>=60)
    // return 'D';
    // else
    // return 'E';

// Another way by switch case
//Asuming marks is between 0 and 100
//  switch(marks/10){
//     case 10: return 'A'; break;
//     case 9 : return 'A'; break;
//     case 8 : return 'B'; break;
//     case 7 : return 'C'; break;
//     case 6 : return 'D'; break;
//     default : return 'E';

//  }

// }
// int main(){
    // int marks;
    // cout<<"Enter the marks"<<endl;
    // cin>> marks;

    //  char finalGrade =getGrade(marks);
    //  cout<<finalGrade<<endl;

//     for(int i=0; i<=100; i++){
//         char ans = getGrade(i);
//         cout<<"Grade for marks = " <<i<< "is"<<ans <<endl;
//     }
// }

// Sum upto n numbers
// int getsum(int n){
//     int sum =0;
//     for(int i=1; i<=n; i++){
//         sum = sum+i;
//     }
//     return sum;
    
// }
//    int main(){
//    int n;
//    cout<<"Enter the value of n"<<endl;
//    cin>>n;
//    int ans = getsum(n);
//    cout<<"sum upto" << n << "is"<<ans<<endl;
//    return 0;
// }


// sum of even number upto n;
int getEvensum(int n){
    int sum =0;
    for(int i=2; i<=n;  i = i+2){
        sum =sum+i;
    }
    return sum;
}

 int main(){
   int n;
   cout<<"Enter the value of n"<<endl;
   cin>>n;
   int ans = getEvensum(n);
   cout<<"sum of even numbers upto "<<n<<" is "<<ans<<endl;
 } 
 




// Program to print number by using a function
// void printnumber(int num){
//     cout<<num<<endl;
//  }
// int main(){
//     int a=5;
//     printnumber(a);
// }

// how to find addres of a
// int a=10;
// cout<<"Addresss of a is:"<<&a <<endl;

//  Addition of two number
// function declariation
// int add(int x, int y);

// int main(){

//     int a;
//     cout<<"Enter the value of a"<< endl;
//     cin>>a;

//     int b;
//     cout<<"Enter the value of b"<< endl; 
//     cin>>b;
    
//     int sum =add(a,b);

//     cout<<"Addition result is "<<sum<<endl;
// }
// int add(int x, int y){
//     int result =x+y;
//     return result;
 
// }


//problem by not using function is lenthyness if our code
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cout<<"Babbar" <<endl;
    // }
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cout<<"Babbar" <<endl;
    // }
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cout<<"Babbar" <<endl;
    // }
    
//}
