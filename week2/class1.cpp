 #include<iostream>
 using namespace std;
 int main(){
 
 // full Pyramid
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int k=0;
    //     for(int j=0; j<((2*n)-1); j++){
    //         if(j<n-i-1){
    //             cout<<" ";
    //         }else if (k<2*i+1){
    //             cout<<"*";
    //             k++;
    //         }else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Hollow full pyramid
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int k=0;
    //     for(int j=0; j<((2*n)-1); j++){
    //         if(j<n-i-1){
    //             cout<<" ";
    //         }else if (k<2*i+1){
    //             if(k==0 || k==2*i ||i==n-1)
    //                cout<<"*";
    //             else
    //             cout<<" ";
    //             k++;
    //         }else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Full Pyramid new pattern
    // int n;
    // cin>>n;
    // for( int i=0; i<n; i++){
    //     for(int j=0; j<n-1; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=2*i-1; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //}

// //     Full Pyramid basic
    // int n;
    // cin>>n;
    // for(int row= 0; row<n; row++){
    //     for(int col=0; col<n-row-1; col++){
    //         cout<<" ";
    //     }

    //     for(int col=0; col<row+1; col =col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    //}
//    Inverted Full pyramid
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row; col++){
    //         cout<<" ";
    //     }
    //     for(int col=0; col<n-row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Solid Diamond
    //  int n;
    // cin>>n;
    // for(int row= 0; row<n; row++){
    //     for(int col=0; col<n-row-1; col++){
    //         cout<<" ";
    //     }

    //     for(int col=0; col<row+1; col =col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl; 
    // }
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row; col++){
    //         cout<<" ";
    //     }
    //     for(int col=0; col<n-row; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Hollow Diamond
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row-1; col++){
    //         cout<<" ";
    //     }
    //     for(int col=0; col<2*row+1; col++){
    //         if(col==0  || col==2*row){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;    
    // }

//  other half

// for(int row=0; row<n; row++){
//     for(int col=0; col<row; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<2*n-2*row-1; col++){
//         if(col==0 || col==2*n-2*row-2){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }


//    Flipped Solid Diamond
//     int n;
//     cin>>n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<n-row; col++){
//             cout<<"*";

//         }
//         for(int col=0; col<2*row+1; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<n-row; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// // other half

//     for(int row=0; row<n; row++){
//         for(int col=0; col<row+1; col++){
//             cout<<"*";
//         }

//         for(int col=0; col<2*n-2*row-1; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<row+1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }


// Fancy Pattern
//    int n;
//    cin>>n;
//    for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//         cout<< row+1 ;
//         if(col != row)
//         cout<<"*";
//     }
//     cout<<endl;
//    }
// //    other half
//    for(int row=0; row<n; row++){
//     for(int col=0; col<n-row; col++){
//         cout<< n-row;
//         if(col != n-row-1)
//         cout<<"*";
//     }
//     cout<<endl;
// }

// Alphabet Palindrome Pattern
//    int n;
//    cin>>n;
//    for(int row=0; row<n; row++){
//     for( int col=0; col<row+1; col++){
//         int ans=col +1;
//         char ch = ans +'A' -1 ;
//         cout<< ch;
//     }
// // for reverse conting printing
//     for(int col=row; col>=1; col=col-1){
//         int ans = col;
//         char ch = ans +'A' -1;
//         cout<< ch;
//     } 
//     cout<<endl;
//    }
 }
