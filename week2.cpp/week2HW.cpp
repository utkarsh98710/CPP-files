#include<iostream>
 using namespace std;
 

    // solid Rectangle
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0;col<n; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Hollow rectangle
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n; col++){
    //         if(row==0 || row==n-1 ||col==0 || col==n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }

    //     }
    //     cout<<endl;
    // }

    // Hollow inverted Half Pyramid
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         if(col==0|| row==0|| col==n-row-1){
    //             cout<<"*";

    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Hollow full pyramid doubt he isme try one more time
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row-1; col++){
    //         cout<<" ";
    //     }
    //     for(int col=0; col<row+1;  col++){
    //         if(col==0  || col==row || row==n-1){
    //             cout<<"* ";

    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }   

//     numeric hollow half pyramid

    //  int n;
    //  cin>>n;
    //  for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         if(col==0 ||col==row || row==n-1){
    //              cout<< col+1;

    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    //  }.

    // numeric hollow inverted half pyramid

    //  int n;
    //  cin>>n;
    //  for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         if(row==0|| col==0|| col==n-row-1){
    //              cout<< row+col+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //      cout<<endl;
    //  }
    

    // Numeric palindrome equilateral Pyramid

    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row-1; col++){
    //         cout<<" ";
    //     }
    //     int c=1;
    //     for(int col=0; col<row+1; col++){
    //         cout<<c;
    //         c++;
    //     }
    //     for(int col=row; col>=1; col=col-1){
    //         cout<< col;
    //     }
    //     cout<<endl;  
    // }


    // Solid  Half Diamond
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //      cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Fancy Pattern #1
    // for(int row=0; row<9; row++){
    //     for(int col=0; col<9-row-1; col++){
    //         cout<<"* ";
    //     }
    //     for(int col=0; col<row+1; col++){
    //          cout<<row+1;
    //         if(col!=row){
    //         cout<<" * ";
    //         }
    //     }
    //     for(int col=0; col<9-row-1; col++){
    //     cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // Fancy Pattern #2

    // int n;
    // cin>>n;
    // int c=1;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<c;
    //         c++;
    //         if(col!=row){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // // cout<<"C: "<<c<<endl;
    //     int start=c-n;
    //      for(int row=0; row<n; row++){
    //         int k=start;
    //         for(int col=0; col<n-row-1; col++){
    //             cout<<k;
    //             k++;
    //         }
    //         start=start-(n-row-1);
    //         cout<<endl;
    //     }


//    Floyd's Triangle Pattern

    //  int c=1;
    //  for(int row=0; row<7; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<<endl;
    //  }

    // pascal Triangle Pattern

    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     int c=1;
    //     for(int col=1; col<row+1; col++){
    //         cout<<c<<" ";
    //         c=c*(row-col)/col;
    //     }
    //     cout<<endl;
    // }



//   Butter fly pattern
//   int n;
//   cin>>n;
//   for(int row=0; row<n; row++){
//     for( int col=0; col<row+1; col++){
//         cout<<"*";
//     }
//     for( int col=0; col<2*n-2*row-2; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<row+1; col++){
//         if(col==n){
//             cout<<"*";
//         }
//         cout<<"*";
    
//     }
//     cout<<endl;
//   }

//   for(int row=0; row<n; row++){
//     for(int col=0; col<n-row; col++){
//         cout<<"*";
//     }
//     for(int col=0; col<row; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<n-row; col++){
//         cout<<"*";
//     }
//     cout<<endl;
//   }


// Area of circle
   
// float circleArea(float radius){
//     float area=3.14*radius*radius;
//     return area;
// }
//    int main(){
//     float radius;
//     cin>>radius;
//     float area=circleArea(radius);
//     cout<<"Area of circle is: "<<area<<endl;
//    }


// bool checkEven(int n){
//      if(/*n%2==0*/ (n&1 == 0)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     bool isEven  = checkEven(n);
//     if(isEven){
//         cout<<n<<" is even number .\n";
//     }
//     else{
//         cout<<n<<" is odd number .\n";
//     }


// factorial of n
// long long int fact( long long int n){
//    long long int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int main(){
//    int n;
//    cin>>n;
//    long long int ans=fact(n);
//    cout<<"Factorial of " <<n<<" is "<<ans<<endl;
// }


// Prime or not

// bool checkprime(int n){
//     int i=2;
//     for(i=2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=2; i<=n; i++){
//         bool isprime = checkprime(i);
//         if(isprime){
//             cout<<i<<" ";
//         }
//     }

//}

// Fancy pattern #2

    // int main(){
    //     int n;
    //     cin>>n;
    //     int c=1;
    //     for(int row=0; row<n; row++){
    //         for(int col=0; col<row+1; col++){
    //             cout<<c;
    //             c++;
    //             if(col!=row){
    //                 cout<<"*";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //     int start=c-n;
    //     for(int row=0; row<n; row++){
    //         int k=start;
    //         for(int col=0; col<n-row; col++){
    //             cout<<k;
    //             k++;
    //             if(col!=n-row-1){
    //                 cout<<"*";
    //             }
    //         }
    //         start=start-(n-row-1);
    //          cout<<endl;
    //     }
    // }


//   fancy pattern #3

   

    
 




